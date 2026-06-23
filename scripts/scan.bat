:: ============================================================================
:: 
::       DESCRIPTION:
::          This script scans the project directory and displays
::          empty folders and empty files in the terminal.
::   
::       TARGET OS:
::          Windows Only
::
::       TARGET ENVIRONMENT:
::          Terminal and console environments
::        
::       LAST MODIFIED:
::          June 18, 2026
:: 
:: ============================================================================

@echo off
color 0B
cls

:: navigate to project root directory
cd /d "%~dp0.."
echo.

:: reset found flag
set found=0

:: notify start of execution
echo Scanning...

:: scan all folders
for /f "delims=" %%d in ('dir /ad /b /s') do (
    :: check folder content
    dir "%%d" /a /b | findstr . >nul
    :: if folder empty
    if errorlevel 1 (
        :: print empty folder
        echo EMPTY FOLDER: %%d
        set found=1
    )
)

:: scan all files
for /r %%f in (*) do (
    :: check zero size
    if %%~zf==0 (
        echo EMPTY FILE: %%f
        :: print empty file
        set found=1
    )
)

echo.

:: nothing found check
if "%found%"=="0" (
    :: clean result output
    echo No empty folders or files found.
)

:: finish message
echo.
echo Scan complete.
:: wait user input
pause