[Rainmeter]
SkinWidth=#SW#
SkinHeight=#SW#
; SolidColor=255,255,255,25
; BackgroundMode=2
; DynamicWindowSize=0

[Variables]
SW=(500*#Scale#)


[mHour]
Measure=Time
Format=%#gVar.2412#
[mMin]
Measure=Time
Format=%M


[Hour]
Meter=String
MeterStyle=String:S
FontSize=(200*#Scale#)
X=(250*#Scale#)
Y=(170*#Scale#)
FontWeight=450
StringAlign=CenterCenter
MeasureName=mHour
FontColor=255,255,255
DynamicVariables=1
; Text=00
; SolidColor=255,255,255,20
[Min]
Meter=String
MeterStyle=String:S
X=r
Y=(210*#Scale#)r
FontSize=(200*#Scale#)
StringAlign=CenterCenter
FontWeight=450
MeasureName=mMIn
DynamicVariables=1
; Text=00
; SolidColor=255,255,255,20

@includeRender=Render\Center\#Render#.inc