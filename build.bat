copy ..\%SOURCE_FOLDER%\251003_app\run_251003_app.bat .\251003_app

@echo off

::Вид сборки / суффикс в названии каталога сборки 
::
::"Ninja" / "ninja"
::"Visual Studio 17 2022" / "visual_studio"
::
set BUILD_TYPE=Ninja
set BUILD_SUFFIX=ninja

chcp 65001

set BUILD_FOLDER=build_%BUILD_SUFFIX%
set SOURCE_FOLDER=projects

if not exist %BUILD_FOLDER% mkdir %BUILD_FOLDER%

cd %BUILD_FOLDER%

cmake -G %BUILD_TYPE% ..\%SOURCE_FOLDER%
cmake --build .

::copy ..\%SOURCE_FOLDER%\251003_app\run_251003_app.bat .\251003_app
::copy ..\%SOURCE_FOLDER%\251017_refactoring\run_251017_refactoring.bat .\251017_refactoring
set arr[0].file=run_251003_app.bat
set arr[1].file=run_251017_refactoring.bat
set arr[2].file=run_251128_class_menu.bat
set arr[3].file=run_251128_home_menu.bat
set arr[4].file=run_20260214_long_number.bat

set arr[0].folder=251003_app
set arr[1].folder=251017_refactoring
set arr[2].folder=251128_class_menu
set arr[3].folder=251128_home_menu
set arr[4].folder=20260214_long_number

for /L %i in (0,1,5) do (
	copy ..\%SOURCE_FOLDER%\!arr[%%i].folder!\!arr[%%i].file! .\!arr[%%i].folder!
)

copy ..\run_tests.bat .