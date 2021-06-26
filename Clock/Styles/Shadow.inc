[Rainmeter]
ContextAction=[!Move (#SCREENAREAWIDTH#/2-(315/2*#Scale#)) (#SCREENAREAHEIGHT#/2-(480/2*#Scale#))]

[Variables]
Scale=1

[mHour]
Measure=Time
Format=%H
[mMin]
Measure=Time
Format=%M
OnChangeAction=[!Commandmeasure GenerateImage "Update"][!UpdateMeter Hour][!Redraw]

[GenerateImage]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=Text [mHour]#CRLF#[mMin] | Face @Roboto.ttf | OffSet 40,40 | Color #OppositeColor# | Weight 450 | Size (200*#Scale#) | LineSpacing (-60*#Scale#) | Shadow 82,10,0,10 ; #MainColor#
UpdateDivider=-1

[Hour]
Meter=Image
MeasureName=GenerateImage
UpdateDivider=-1