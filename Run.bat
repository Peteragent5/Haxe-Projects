@echo off
for /f %%A in ('"prompt $H & echo on & for %%B in (1) do rem"') do set "bs=%%A"
for /D %%f in (*) do set proj=%%f
if "%proj%"=="" set proj=Test
if exist "%proj%\bin\%proj%.n" cd /D "%~dp0%proj%\bin" & neko %proj%.n & goto done
if exist "%proj%\src\%proj%.n" cd /D "%~dp0%proj%\src" & neko %proj%.n & goto done
echo. & echo  Error: '%proj%.n' not found!
echo.
pause>nul|set /P =%bs% Press any key to continue . . . 
:done
rem pause