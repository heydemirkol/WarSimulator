:: ============================================================================
:: 
::       DESCRIPTION:
::          This script automates the generation of the project folder structure
::          and safely initializes core directories.
::   
::       TARGET OS:
::          Windows Only
:: 
::       TARGET ENVIRONMENT:
::          Terminal and console environments 
:: 
::       LAST MODIFIED:
::          June 23, 2026
:: 
:: ============================================================================

@echo off
color 0B
cls

:: navigate to project root directory
cd /d "%~dp0.."
echo.

:: notify start of execution
echo Creating project structure...

:: if not exist create folder
if not exist "docs" mkdir "docs"
if not exist "src" mkdir "src"
if not exist "include" mkdir "include"
if not exist "assets" mkdir "assets"
if not exist "assets\gifs" mkdir "assets\gifs"
if not exist "assets\screenshots" mkdir "assets\screenshots"
if not exist "utils" mkdir "utils"
if not exist "utils\src" mkdir "utils\src"
if not exist "utils\include" mkdir "utils\include"
if not exist "utils\src\console" mkdir "utils\src\console"
if not exist "utils\src\math" mkdir "utils\src\math"
if not exist "utils\src\text" mkdir "utils\src\text"
if not exist "utils\include\console" mkdir "utils\include\console"
if not exist "utils\include\math" mkdir "utils\include\math"
if not exist "utils\include\text" mkdir "utils\include\text"

:: finish message
echo.
echo All directories created successfully!
echo.
:: wait user input
pause