@echo off
:run
set e=echo
for /f %%A in ('"prompt $H & echo on & for %%B in (1) do rem"') do set "bs=%%A"
set proj=test
cls
if not exist *.hx (
%e%.
%e%  Error: .hx file not found!
%e%.
pause>nul|set /P =%bs% Press any key to continue . . . 
goto :EOF
)
%e%.
%e%  Build Options:
%e%.
%e%  1) Neko
%e%.
%e%  2) xCross
%e%.
%e%  x) Exit
%e%.
set i=
set /P i=%bs% Enter selection: 
if '%i%'=='' goto run
if %i%==1 set build=neko
if %i%==2 set build=xcross
if /I %i%==x goto :EOF
if not exist *.hx (
%e%.
%e%  Error: .hx file not found!
%e%.
pause>nul|set /P =%bs% Press any key to continue . . . 
goto :EOF
)
for %%f in (*.hx) do %e%. & %e%  Compiling %%f ...
if "%build%"=="xcross" (
if exist "%proj%.n"             del /F "%proj%.n"
if exist "%proj%-linux"         del /F "%proj%-linux"
if exist "%proj%-osx"           del /F "%proj%-osx"
if exist "%proj%-win.exe"       del /F "%proj%-win.exe"
haxe -neko %proj%.n -lib xcross -main Main
haxelib run xcross %proj%.n
)
if "%build%"=="neko" (
if exist "%proj%.n"             del /F "%proj%.n"
if exist "%proj%.exe"           del /F "%proj%.exe"
haxe -neko %proj%.n -main Main
nekotools boot %proj%.n
)
rem %proj%-win.exe
cmd /K echo.