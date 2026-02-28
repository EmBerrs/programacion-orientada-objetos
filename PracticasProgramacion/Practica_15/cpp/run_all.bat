@echo off

REM Guardar el nombre del ejecutable
set EXE_NAME=main.exe

REM Limpiar compilaciones previas
if exist %EXE_NAME% del %EXE_NAME%

REM Compilar todos los archivos .cpp en la carpeta
g++ *.cpp -o %EXE_NAME%
if %errorlevel% neq 0 (
    echo =================================================
    echo ERROR: Fallo la compilacion
    echo =================================================
    pause
    exit /b %errorlevel%
)

echo =================================================
echo EJECUTANDO: %EXE_NAME%
echo =================================================
%EXE_NAME%

echo =================================================
echo FIN DEL PROGRAMA
echo =================================================
pause