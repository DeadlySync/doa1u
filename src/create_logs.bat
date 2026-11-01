@echo off
setlocal EnableExtensions DisableDelayedExpansion
rem Copy beside doa1u_recomp.exe, or pass the executable's full path as argument 1.
rem Existing logs are replaced. Only diagnostics change, not gameplay defaults.
set "game=%~dp0doa1u_recomp.exe"
if not "%~1"=="" set "game=%~f1"
if not exist "%game%" (
    echo Cannot find "%game%".
    echo Place this batch beside doa1u_recomp.exe, or pass the EXE path as argument 1.
    pause
    exit /b 1
)
for %%I in ("%game%") do set "game_dir=%%~dpI"
pushd "%game_dir%"
if errorlevel 1 exit /b 1
set "DOA1U_LOGS=1"
set "XBOX_LOG_LEVEL=2"
echo Logging enabled: run.log, run.err and xbox_kernel.log beside the executable.
"%game%" 1>"run.log" 2>"run.err"
set "launch_result=%errorlevel%"
popd
endlocal & exit /b %launch_result%
