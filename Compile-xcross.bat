@echo off
setlocal enableextensions
set e=echo
set p=pause
pushd "%cd%\"
cd /D "%~dp0"
for /f %%A in ('"prompt $H & echo on & for %%B in (1) do rem"') do set "bs=%%A"
rem pause>nul|set /P =%bs% Press any key to continue . . . 
rem Settings --------
:run
cls
%e%.
%e%  x - Exit
%e%.
set f=
set /P f=%bs% Folder name: 
if '%f%'=='' goto run
if /I %f%==x goto exit
if not exist "%f%" (
%e%.
pause>nul|set /P =%bs% Error: '%f%' not found! 
goto run
)
%e%.
set a=
set /P a=%bs% Class name: 
%e%.
%e%  Building %f%.hx ...
cd /D %f%\src
haxe -neko ..\bin\%f%.n -lib xcross -main %a%
if errorlevel 1 (
%e%.
pause>nul|set /P =%bs% Press any key to continue . . . 
goto run
)
if errorlevel 0 goto noerr
:noerr
cd /D "%~dp0"
%e%.
set ii=
set /P ii=%bs% Do you want to cross-compile %f%.n? [Y/n]: 
if /I %ii%==y (
mkdir %f%\bin\cross-compile
move %f%\bin\%f%.n %f%\bin\cross-compile
haxelib run xcross %f%\bin\cross-compile\%f%.n
del /F %f%\bin\cross-compile\%f%.n
%e%.
pause>nul|set /P =%bs% Finished! Press any key to continue . . . 
goto run
)
if /I %ii%==n goto run
goto run
:exit
cls
%e%.
title %SystemRoot%\system32\cmd.exe
%e%  Goodbye!
popd
