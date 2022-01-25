[Rainmeter]
SkinWidth=#SW#
SkinHeight=#SW#
; SolidColor=255,255,255,25
; BackgroundMode=2
; DynamicWindowSize=0

[Variables]
SW=(500*#Scale#)
P=10


[mHour]
Measure=Time
Format=%#gVar.2412#
[mMin]
Measure=Time
Format=%M
[mDate]
Measure=Time
Format=%e %a/ %b


[Hour]
Meter=String
MeterStyle=String:S
FontSize=(200*#Scale#)
X=(250*#Scale#)
Y=(160*#Scale#)
FontWeight=450
StringAlign=CenterCenter
MeasureName=mHour
DynamicVariables=1
FontColor=#Secondarycolor#
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
InlineSetting=GradientColor | 270 | #Secondarycolor# ; 0.2 | #Secondarycolor#,0 ; 0.8

[TextContainer]
Meter=Shape
X=r
Y=(-(370*#scale#-#SW#/2))r
Container=Min
Shape=Path This | StrokeWidth 0 | OffSet 0,0 | Fill Color #Secondarycolor#
This=0,0 | LineTo (-250*#scale#),0 | LineTo ((#SW#/2-#P#*2) * cos(Rad(#ArcStart#))),((#SW#/2-#P#*2) * sin(Rad(#ArcStart#))+((#ArcStart#-130)*6*#scale#)) | ArcTo ((#SW#/2-#P#*2) * cos(Rad(#ArcEnd#))),((#SW#/2-#P#*2) * sin(Rad(#ArcEnd#))+((#ArcStart#-130)*6*#scale#)),(#SW#/2-#P#*2),(#SW#/2-#P#*2),0,0 | LineTo (250*#scale#),0 |ClosePath 1

[Arc]
Meter=Shape
X=(#SW#/2)
Y=(#SW#/2+(#ArcStart#-130)*6*#scale#)
Shape=Arc ((#SW#/2-#P#*2) * cos(Rad(#ArcStart#))),((#SW#/2-#P#*2) * sin(Rad(#ArcStart#))),((#SW#/2-#P#*2) * cos(Rad(#ArcEnd#))),((#SW#/2-#P#*2) * sin(Rad(#ArcEnd#))),(#SW#/2-#P#*2),(#SW#/2-#P#*2),0,0 | Extend Common | Stroke LinearGradient This | OffSet 0,5
This=0 | #Primarycolor# ; 0.1 | #Primarycolor#,0 ; 1.0
Common=StrokeStartCap Round | StrokeEndCap Round | StrokeWidth 10
UpdateDivider=-1

[Date]
Meter=String
MeterStyle=String:S
FontSize=(25*#Scale#)
X=(250*#Scale#)
Y=(440*#Scale#)
FontWeight=450
FontFace=Metropolis Light
StringAlign=CenterCenter
MeasureName=mDate
FontColor=#Primarycolor#
InlinePattern=/
INlineSetting=Size | (12*#scale#)
InlinePattern2=/
INlineSetting2=Color | #Primarycolor#,150
DynamicVariables=1