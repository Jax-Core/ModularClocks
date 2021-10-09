[Rainmeter]
; SolidColor=255,255,255,25
; BackgroundMode=2
Update=#Rm.Update#
DefaultUpdateDivider=-1
SkinWidth=(#SW#+(#Stroke#*#Scale#))
Skinheight=(#SH#+(#Stroke#*#Scale#))

[Variables]
Rounding=50


[B]
Meter=Shape
X=((#Stroke#*#Scale#)/2)
Y=((#Stroke#*#Scale#)/2)
Shape=Rectangle 0,0,#SW#,#SH#,(#Rounding#*#Scale#),(#Rounding#*#Scale#) | StrokeWidth (#Stroke#*#Scale#) | Extend Fill
Fill=Fill Color #MainColor#,150 | Stroke Color #OppositeColor#


[mLoop]
Measure=calc
Formula=(mLoop > 0.995 ? 0 : mLoop + 0.005)
UpdateDivider=1
[mHour]
Measure=Time
Format=%#2412#%M
UpdateDivider=1
[mSecA]
Measure=Time
Format=%S
AverageSize=30
MaxValue=60
UpdateDivider=1
[mSec]
Measure=Calc
Formula=(mSecA%60)
MaxValue=60
UpdateDivider=1


@includeRotation=Render\Measure\#Rotation#.inc


@includeRender=Render\Measure\#Render#.inc