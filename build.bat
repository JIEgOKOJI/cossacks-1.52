@echo off
"C:\Program Files\Microsoft Visual Studio\2022\Community\MSBuild\Current\Bin\MSBuild.exe" "%~dp0src\Cossacks.sln" -nologo -v:minimal
pause
