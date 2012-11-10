@echo off
for /f %%A in ('"prompt $H & echo on & for %%B in (1) do rem"') do set "bs=%%A"
::set proj=
set proj=Test
::set /P proj=%bs% Project name: 
if exist "%proj%\bin\%proj%.n" cd /D "%~dp0%proj%\bin" & neko %proj%.n
if exist "%proj%\src\%proj%.n" cd /D "%~dp0%proj%\src" & neko %proj%.n

rem pause