@echo off
set proj=Test
if exist "bin\%proj%.n" cd /D "%~dp0bin"
if exist "src\%proj%.n" cd /D "%~dp0src"
neko %proj%.n
pause