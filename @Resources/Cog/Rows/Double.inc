
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