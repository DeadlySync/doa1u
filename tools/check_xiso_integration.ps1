# Final, headless Stage 6 gate. Does not launch/deploy the game or change game data.
param(
    [string]$Image,
    [string]$Extracted,
    [string]$BuildDirectory,
    [ValidateSet('Debug','Release')][string[]]$Configuration = @('Debug','Release')
)
$ErrorActionPreference = 'Stop'
$repo = Split-Path $PSScriptRoot -Parent
$workspace = Split-Path $repo -Parent
if (!$BuildDirectory) { $BuildDirectory = Join-Path $repo 'build' }
if (!$Extracted) { $Extracted = Join-Path $workspace 'XISO' }
if (!$Image) { $Image = Join-Path $workspace 'Dead or Alive 1 Ultimate (USA, Japan) (En,Ja).xiso.iso' }
$BuildDirectory = (Resolve-Path -LiteralPath $BuildDirectory).Path
$Extracted = (Resolve-Path -LiteralPath $Extracted).Path
$Image = (Resolve-Path -LiteralPath $Image).Path
$report = Join-Path $BuildDirectory ('xiso-integration-' + (Get-Date -Format 'yyyyMMdd-HHmmss-fff'))
New-Item -ItemType Directory -Path $report | Out-Null
$results = [System.Collections.Generic.List[object]]::new()

function Invoke-Check([string]$Name, [string]$Program, [string[]]$CheckArguments) {
    $null = Get-Command -Name $Program -ErrorAction Stop
    $log = Join-Path $report ($Name + '.log')
    $timer = [Diagnostics.Stopwatch]::StartNew()
    # Expected negative fixture diagnostics go to the log, not PowerShell's
    # terminating-error path. The native process exit code is the test verdict.
    $previousPreference = $ErrorActionPreference
    $ErrorActionPreference = 'Continue'
    try { & $Program @CheckArguments *> $log; $checkExit = $LASTEXITCODE }
    finally { $ErrorActionPreference = $previousPreference }
    $timer.Stop()
    $results.Add([pscustomobject]@{name=$Name; exit_code=$checkExit; seconds=$timer.Elapsed.TotalSeconds; log=$log})
    $results | ConvertTo-Json -Depth 5 | Set-Content -LiteralPath (Join-Path $report 'checks.json') -Encoding utf8
    if ($checkExit -ne 0) { Get-Content -LiteralPath $log -Tail 25; throw "Check failed: $Name (exit $checkExit)" }
    Write-Host ('PASS {0} ({1:F2}s)' -f $Name, $timer.Elapsed.TotalSeconds)
}

Push-Location $repo
try {
    Write-Host "Integration evidence: $report"
    Invoke-Check 'cmake-backend-selection' 'python' @('tools/check_xiso_backend.py',$BuildDirectory,'--self-test')
    Invoke-Check 'build-configurations' 'python' @('tools/check_build_configs.py',$BuildDirectory)
    Invoke-Check 'sources-normal' 'cmake' @('-DDOA1U_DIAGNOSTIC=OFF','-P','tools/check_source_config.cmake')
    Invoke-Check 'sources-diagnostic' 'cmake' @('-DDOA1U_DIAGNOSTIC=ON','-P','tools/check_source_config.cmake')
    $manifests = @()
    foreach ($config in $Configuration) {
        $bin = Join-Path $BuildDirectory $config
        Invoke-Check "$config-reader-full" (Join-Path $bin 'xiso_reader_check.exe') @($Image,$Extracted,'--full')
        $hostFixture = Join-Path $report "$config-host-fixture"
        New-Item -ItemType Directory -Path $hostFixture | Out-Null
        Invoke-Check "$config-host-api" (Join-Path $bin 'xbox_file_backend_check.exe') @($hostFixture)
        Invoke-Check "$config-image-api-full" (Join-Path $bin 'xbox_image_file_check.exe') @((Join-Path $report "$config-image-fixture"),$Image,$Extracted)
        Invoke-Check "$config-bootstrap" (Join-Path $bin 'disc_bootstrap_check.exe') @((Join-Path $report "$config-bootstrap-fixture"),(Join-Path $Extracted 'Doa1.xbe'),$Image)
        Invoke-Check "$config-movie-io" (Join-Path $bin 'sofdec_io_check.exe') @()
        Invoke-Check "$config-movie-path" (Join-Path $bin 'fmv_path_check.exe') @()
        foreach ($mode in 'folder','image') {
            $manifest = Join-Path $report "$config-movie-$mode.json"
            $source = if ($mode -eq 'folder') { $Extracted } else { $Image }
            Invoke-Check "$config-movie-$mode" (Join-Path $bin 'sofdec_check.exe') @($mode,$source,$manifest)
            $manifests += $manifest
        }
    }
    Invoke-Check 'movie-parity' 'python' (@('tools/check_sofdec_parity.py','docs/reference/sofdec-baseline.json') + $manifests)
    $hashes = foreach ($config in $Configuration) {
        foreach ($name in 'doa1u_recomp.exe','doa1u_recomp.pdb') {
            $path = Join-Path (Join-Path $BuildDirectory $config) $name
            if (Test-Path -LiteralPath $path) {
                $digest = Get-FileHash -Algorithm SHA256 -LiteralPath $path
                [pscustomobject]@{configuration=$config; path=$path; sha256=$digest.Hash}
            }
        }
    }
    $hashes | ConvertTo-Json -Depth 4 | Set-Content -LiteralPath (Join-Path $report 'build-hashes.json') -Encoding utf8
    Write-Host "AUTOMATED GATE PASSED. Evidence: $report"
    Write-Host 'Physical gameplay/FMV/saves/F1/ESC verification is still required; no deployment was performed.'
} finally { Pop-Location }
