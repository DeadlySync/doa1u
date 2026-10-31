# User-run Debug capture: no injected inputs, renderer changes, or time limit.
param([switch]$PrepareOnly)
$ErrorActionPreference = 'Stop'
$workspace = Split-Path (Split-Path $PSScriptRoot -Parent) -Parent
$xiso = Join-Path $workspace 'XISO'
$exe = Join-Path $xiso 'doa1u_recomp.exe'
$pdb = Join-Path $xiso 'doa1u_recomp.pdb'
if (!(Test-Path -LiteralPath $exe) -or !(Test-Path -LiteralPath $pdb)) {
    throw 'Deploy the Debug executable and its matching PDB to XISO first.'
}
if (Get-Process doa1u_recomp -ErrorAction SilentlyContinue) {
    throw 'Close the game before starting this capture.'
}
$cdb = 'C:\Program Files\WindowsApps\Microsoft.WinDbg_1.2610.1001.0_x64__8wekyb3d8bbwe\amd64\cdb.exe'
if (!(Test-Path -LiteralPath $cdb)) {
    $cdb = (Get-ChildItem 'C:\Program Files\WindowsApps\Microsoft.WinDbg_*\amd64\cdb.exe' |
        Sort-Object FullName -Descending | Select-Object -First 1).FullName
}
if (!$cdb) { throw 'CDB was not found. Install Debugging Tools for Windows/WinDbg.' }
$stamp = Get-Date -Format 'yyyyMMdd-HHmmss-fff'
$artifacts = Join-Path $PSScriptRoot "reference\investigations\training-capture-$stamp"
New-Item -ItemType Directory -Path $artifacts | Out-Null
foreach ($name in 'run.err','run.log','xbox_kernel.log','doa1u_graphics.ini') {
    $source = Join-Path $xiso $name
    if (Test-Path -LiteralPath $source) {
        Copy-Item -LiteralPath $source -Destination (Join-Path $artifacts "before-$name")
    }
}
Get-FileHash -Algorithm SHA256 -LiteralPath $exe,$pdb |
    Format-List | Out-File -LiteralPath (Join-Path $artifacts 'build-hashes.txt')
# Relative paths avoid nested debugger quotation in breakpoint command strings.
$relative = "..\doa1u_port\tools\reference\investigations\training-capture-$stamp"
$commands = @"
.sympath $xiso
.reload /f doa1u_recomp.exe
.lines -e
sxd *
sxd av
sxd gp
sxi ibp
sxi epr
sxe -c "gn" sse
sxe sov
sxe 0xc0000409
bu ntdll!RtlExitUserProcess ".echo === EXIT REQUEST ===; r rcx; kv 60; .if (@ecx != 0) { .dump /ma $relative\exit-request.dmp }; gc"
bu ntdll!NtTerminateProcess ".echo === TERMINATE REQUEST ===; r rcx; r rdx; kv 60; .if (@edx != 0) { .dump /ma $relative\terminate-request.dmp }; gc"
.echo === CAPTURE ARMED: play Training normally ===
g
.echo === STOP: fatal exception or process exit ===
.lastevent
.exr -1
.ecxr
r
kv 80
~*kv 12
dps @rsp L80
u @rip L20
.dump /ma $relative\fatal.dmp
.echo === CAPTURE COMPLETE ===
qd
"@
$commandFile = Join-Path $artifacts 'capture.cdb'
Set-Content -LiteralPath $commandFile -Value $commands -Encoding ASCII
Write-Host "Evidence folder: $artifacts"
if ($PrepareOnly) { return }
# Preserve the exact symbol pair even if another build replaces XISO later.
Copy-Item -LiteralPath $exe,$pdb -Destination $artifacts
Write-Host 'Play Training normally. A crash/exit may freeze briefly while a full dump is written.'
Write-Host 'Leave this window open until Capture finished appears. Debugger overhead may affect timing.'
try {
    $debugger = Start-Process -FilePath $cdb -WindowStyle Hidden -WorkingDirectory $xiso -PassThru `
        -ArgumentList @('-o','-cf',('"' + $commandFile + '"'),('"' + $exe + '"')) `
        -RedirectStandardOutput (Join-Path $artifacts 'debugger.txt') `
        -RedirectStandardError (Join-Path $artifacts 'debugger-stderr.txt')
    $debugger.WaitForExit()
    Write-Host "Capture finished (debugger exit $($debugger.ExitCode))."
} finally {
    foreach ($name in 'run.err','run.log','xbox_kernel.log','doa1u_graphics.ini') {
        $source = Join-Path $xiso $name
        if (Test-Path -LiteralPath $source) {
            Copy-Item -LiteralPath $source -Destination (Join-Path $artifacts $name)
        }
    }
    Write-Host "Evidence saved: $artifacts"
}
