@echo off
SET PATH=C:/Program Files/OpenModelica1.27.0-64bit/bin/;C:/Program Files/OpenModelica1.27.0-64bit/lib//omc;C:/Program Files/OpenModelica1.27.0-64bit/lib/;C:/Users/Irvan/AppData/Roaming/.openmodelica/binaries/Modelica;C:/Users/Irvan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Resources/Library/mingw64;C:/Users/Irvan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Resources/Library/ucrt64;C:/Users/Irvan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Resources/Library/win64;C:/Users/Irvan/AppData/Roaming/.openmodelica/libraries/Modelica 3.2.3+maint.om/Resources/Library;C:/Program Files/OpenModelica1.27.0-64bit/bin/;%PATH%;
SET ERRORLEVEL=
CALL "%CD%/WaterCooledChillerExample.WaterCooledChillerExample7.exe" %*
SET RESULT=%ERRORLEVEL%

EXIT /b %RESULT%
