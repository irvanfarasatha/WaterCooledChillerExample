# WaterCooledChillerExample
* Modelica言語で開発した水冷チラーモデルのサンプルです．
* [Modelica Buildings library](https://simulationresearch.lbl.gov/modelica/)のExamples.ChillerPlant.DataCenterContinuousTimeControlモデルをもとに開発しました．

# 開発環境
* OpenModelica v1.17.0 (64-bit)
* JModelica 2.14
* Modelica Standard Library 3.2.2 (JModelica付属)
* Modelica Buildings Library 6.0.0
* Python 3.8.7 (FMPy実行用)
* FMPy 0.2.27
* Python 2.7.13 (JModelica付属)

# 使用方法
* (1) `package.mo`をOpenModelicaで開き，モデル内容を編集します．
* (2) `WaterCooledChillerExample.py`を編集してPython3から実行します．
  - `compile_fmu.py`が生成され，JModelicaでモデルがFMUにコンパイルされます
  - FMPyを使ってFMUを実行し，結果を表示します．
* 以下の記事も参照ください．  
  [ModelicaのインストールとModelica Buildings Libraryのサンプルモデルの実行 - Yoshihiro Ohta’s blog](https://ohtayo.hatenablog.com/entry/2021/04/25/223209)

# OpenModelica setup
* Use the full model name: `WaterCooledChillerExample.WaterCooledChillerExample7`.
* The OpenModelica library path should contain the package folder only:
  `C:\Users\irfan\AppData\Roaming\.openmodelica\libraries\WaterCooledChillerExample`.
  Do not copy `package.mo`, `package.order`, or `WaterCooledChillerExample*.mo` directly into
  `C:\Users\irfan\AppData\Roaming\.openmodelica\libraries`.
* Required library versions for this package are pinned in `package.mo`:
  `Buildings 6.0.0` and `Modelica 3.2.2`.
* To install and verify with OpenModelica:
  - `& "C:\Program Files\OpenModelica1.27.0-64bit\bin\omc.exe" install_openmodelica_dependencies.mos`
  - `& "C:\Program Files\OpenModelica1.27.0-64bit\bin\omc.exe" check_openmodelica.mos`
* Modex v0.1.11 currently builds the active nested file as `WaterCooledChillerExample7`
  instead of `WaterCooledChillerExample.WaterCooledChillerExample7`. If you use Modex
  simulation, copy `modex_compat\WaterCooledChillerExample7.mo` to
  `C:\Users\irfan\AppData\Roaming\.openmodelica\libraries\WaterCooledChillerExample7.mo`.

# License
MITライセンスで公開します．
