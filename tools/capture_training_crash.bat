@echo off
powershell.exe -NoLogo -NoProfile -ExecutionPolicy Bypass -File "%~dp0capture_training_crash.ps1"
echo.
pause
