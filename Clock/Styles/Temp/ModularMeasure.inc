[Rainmeter]
; SolidColor=255,255,255,25
; BackgroundMode=2
Update=25
DefaultUpdateDivider=-1
SkinWidth=(#SW#+#Stroke#)
Skinheight=(#SH#+#Stroke#)

[Variables]
SW=(100*#Scale#)
SH=(400*#Scale#)
; Scale=2
Stroke=(4*#Scale#)

[B]
Meter=Shape
X=(#Stroke#/2)
Y=(#Stroke#/2)
Shape=Rectangle 0,0,#SW#,#SH#,(20*#Scale#),(20*#Scale#) | StrokeWidth #Stroke# | Stroke Color #OppositeColor# | Fill Color #MainColor#,150


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


[Wave]
Meter=Shape
; X=(-200+200*[mLoop])
; Y=(#Stroke#+#SH#-#SH#*[mSec]/60)
UpdateDivider=1
DynamicVariables=1
Shape=Path This | StrokeWidth 0 | StrokeColor #OppositeColor# | OffSet ((-200+200*[mLoop])*#Scale#),(#Stroke#+#SH#-#SH#*[mSec]/60) | Fill Color #Oppositecolor#,245
; This=(-200+200*[mLoop]),0 | CurveTo (100-200+200*[mLoop]),0,(25-200+200*[mLoop]),-25,(100-25-200+200*[mLoop]),25,0 | CurveTo (200-200+200*[mLoop]),0,(200-100+25-200+200*[mLoop]),-25,(200-25-200+200*[mLoop]),25,0  | CurveTo (300-200+200*[mLoop]),0,(300-100+25-200+200*[mLoop]),-25,(300-25-200+200*[mLoop]),25,0  | CurveTo (400-200+200*[mLoop]),0,(400-100+25-200+200*[mLoop]),-25,(400-25-200+200*[mLoop]),25,0  | LineTo (#SW#+300),#SH# | LineTo 0,#SH# | ClosePath 1
This=0,0 | CurveTo (100*#Scale#),0,(25*#Scale#),(-25*#Scale#),((100-25)*#Scale#),(25*#Scale#),0 | CurveTo (200*#Scale#),0,((200-100+25)*#Scale#),(-25*#Scale#),((200-25)*#Scale#),(25*#Scale#),0  | CurveTo (300*#Scale#),0,((300-100+25)*#Scale#),(-25*#Scale#),((300-25)*#Scale#),(25*#Scale#),0  | CurveTo (400*#Scale#),0,((400-100+25)*#Scale#),(-25*#Scale#),((400-25)*#Scale#),(25*#Scale#),0  | LineTo (#SW#+300*#Scale#),#SH# | LineTo 0,#SH# | ClosePath 1
Shape2=Rectangle (#Stroke#),(#Stroke#),(#SW#-#Stroke#),(#SH#-#stroke#),(20*#Scale#),(20*#Scale#) | StrokeWidth 0
Shape3=Combine Shape | Intersect Shape2


[Hour]
Meter=String
MeterStyle=S
X=(0*#Scale#)
Y=(260*#scale#)
Angle=(Rad(-90))
StringAlign=CenterCenter
DynamicVariables=1
Measurename=mHour
FontSize=(70*#Scale#)
FontColor=#OppositeColor#
FontFace=Roboto
UpdateDivider=1
Container=
