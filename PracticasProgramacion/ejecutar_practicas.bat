@echo off
REM =================================================
REM Compila y ejecuta todas las prácticas en subcarpetas
REM =================================================

for /d %%f in (*) do (
    if exist "%%f\*.cpp" (
        echo =================================================
        echo EJECUTANDO PRACTICA: %%f
        echo =================================================
        pushd %%f
        g++ *.cpp -o main.exe -lm
        if %errorlevel% neq 0 (
            echo ERROR en %%f
            popd
            continue
        )
        main.exe
        popd
    )
)
echo =================================================
echo FIN DE TODAS LAS PRACTICAS
echo =================================================
pause