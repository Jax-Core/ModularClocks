[Variables]
@includeMain=#@#Data\MainData.inc
@includeFill=#@#Cog\Fill\#MainFill#.inc

[m11]
Measure=Time
Format=%#2412#

[m13]
Measure=Time
Format=%M

[1]
Meter=String
MeterStyle=String:S | #Layout#:S | Fill:#MainFill#
MeasureName=m11
FontSize=(#MainFontSize#*#Scale#)
FontFace=#MainFontFace#
LeftMouseUpAction=[!CommandMeasure Func "startBox('Clocks', 'Main')" "#JaxCore\Main"]
[2]
Meter=String
MeterStyle=String:S | #Layout#2:S | Fill:#MainFill#
X=r
Y=((#MainFontSize#+10)*#Scale#)r
FontSize=(#MainFontSize#*#Scale#)
FontFace=#MainFontFace#
MeasureName=m13
LeftMouseUpAction=[!CommandMeasure Func "startBox('Clocks', 'Main')" "#JaxCore\Main"]
@includeRows=#@#Cog\Rows\#Rows#.inc