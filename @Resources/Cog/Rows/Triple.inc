
[d1]
Meter=String
X=#2DisX#r
Y=#2DisY#R
MeterStyle=String:S | Date:S | Fill:#2Fill#
MeasureName=m#2TimeFormat#
FontSize=(#2FontSize#*#Scale#)
FontFace=#2FontSize#
FontFace=#2FontFace#
LeftMouseUpAction=[!CommandMeasure Func "startBox('Clocks', '2')" "#JaxCore\Main"]
@includeVal2=#@#Cog\Val\#2TimeFormat#.inc
@includeFill2=#@#Cog\Fill\#2Fill#.inc

[d2]
Meter=String
X=#3DisX#r
Y=#3DisY#R
MeterStyle=String:S | Date:S | Fill:#3Fill#
MeasureName=m#3TimeFormat#
FontSize=(#3FontSize#*#Scale#)
FontFace=#3FontSize#
FontFace=#3FontFace#
LeftMouseUpAction=[!CommandMeasure Func "startBox('Clocks', '3')" "#JaxCore\Main"]
@includeVal3=#@#Cog\Val\#3TimeFormat#.inc
@includeFill3=#@#Cog\Fill\#3Fill#.inc