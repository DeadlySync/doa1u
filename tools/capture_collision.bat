@echo off
setlocal
if exist "%~dp0doa1u_recomp.exe" (
    cd /d "%~dp0"
) else (
    cd /d "%~dp0..\..\XISO"
)
if not exist doa1u_recomp.exe exit /b 1
set "TRACE_DIR=captures\collision-%RANDOM%-%RANDOM%"
mkdir "%TRACE_DIR%"
if errorlevel 1 exit /b 1
set "RECOMP_COLLISION_TRACE=%CD%\%TRACE_DIR%\state.bin"
echo In training: stand normally, perform Hayabusa's Left + C throw.
echo Wait a few seconds with the bad position, then jump to recover.
echo Exit normally after recovery. Trace stops after 7200 game frames.
echo Output: %TRACE_DIR%
doa1u_recomp.exe 1>"%TRACE_DIR%\run.log" 2>"%TRACE_DIR%\run.err"
echo Trace saved to %TRACE_DIR%.
pause
