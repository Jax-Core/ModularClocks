[Variables]
@includeMain=#@#Data\MainData.inc
@includeVal=#@#Cog\Val\#MainTimeFormat#.inc
@includeFill=#@#Cog\Fill\#MainFill#.inc


[Sec0:S]
InlinePattern2=[m4#Sec#]
DynamicVariables=1
InlineSetting2=Size | #FontSize2#
[Sec1:S]
InlinePattern2=[m4#Sec#]
DynamicVariables=1
InlineSetting2=Size | #FontSize2#
[Sec2]


[m42]
Measure=String
Format=
Disabled=(#Sec# = 2 ? 0 : 1)
[m41]
Measure=Time
Format=#Seperator2#%S
Disabled=(#Sec# = 1 ? 0 : 1)
[m40]
Measure=Time
Format=#Seperator2#%p
Disabled=(#Sec# = 0 ? 0 : 1)

[1]
Meter=String
MeterStyle=String:S | #Layout#1:S | Sec#Sec#:S | Fill:#MainFill#
MeasureName=m#MainTimeFormat#
MeasureName2=m4#Sec#
text=%1%2
FontSize=(#MainFontSize#*#Scale#)
FontFace=#MainFontFace#
LeftMouseUpAction=[!CommandMeasure Func "startBox('Clocks', 'Main')" "#JaxCore\Main"]

@includeRows=#@#Cog\Rows\#Rows#.inc