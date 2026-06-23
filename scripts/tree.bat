:: ============================================================================
:: 
::       DESCRIPTION:
::          This script displays the full project directory tree.
::   
::       TARGET OS:
::          Windows Only
:: 
::       TARGET ENVIRONMENT:
::          Terminal and console environments
:: 
::       LAST MODIFIED:
::          June 17, 2026
:: 
:: ============================================================================

@echo off
color 0B
cls

:: navigate to project root directory
cd /d "%~dp0.."
echo.

:: notify start of execution
echo Project directory tree:
echo.

:: display full tree with files 
tree /f /a

:: finish message
echo.
echo Tree generation completed!
echo.
:: wait user input
pause