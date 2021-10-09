[Variables]
SW=(400*#Scale#)
SH=(100*#Scale#)
WaveScale=(#Scale#*2)


[Hour]
Meter=String
MeterStyle=String:S
X=(#SW#/2)
Y=(60*#Scale#)
StringAlign=CenterCenter
DynamicVariables=1
Measurename=mHour
FontSize=(70*#Scale#)
FontColor=#OppositeColor#
FontFace=Roboto
UpdateDivider=1
Container=

[ActualWave]
Meter=Shape
UpdateDivider=1
DynamicVariables=1
Shape=Path This | StrokeWidth 0 | StrokeColor #OppositeColor# | OffSet ((-200+200*[mLoop])*#Scale#),((#Stroke#*#Scale#)+#SH#-#SH#*[mSec]/60) | Extend Fill
Fill=Fill Color #Oppositecolor#,245
; This=(-200+200*[mLoop]),0 | CurveTo (100-200+200*[mLoop]),0,(45-200+200*[mLoop]),-45,(100-45-200+200*[mLoop]),45,0 | CurveTo (200-200+200*[mLoop]),0,(200-100+45-200+200*[mLoop]),-45,(200-45-200+200*[mLoop]),45,0  | CurveTo (300-200+200*[mLoop]),0,(300-100+45-200+200*[mLoop]),-45,(300-45-200+200*[mLoop]),45,0  | CurveTo (400-200+200*[mLoop]),0,(400-100+45-200+200*[mLoop]),-45,(400-45-200+200*[mLoop]),45,0  | LineTo (#SW#+300),#SH# | LineTo 0,#SH# | ClosePath 1
This=0,0 | CurveTo (100*#WaveScale#),0,(15*#WaveScale#),(-15*#WaveScale#),((100-15)*#WaveScale#),(15*#WaveScale#),0 | CurveTo (200*#WaveScale#),0,((200-100+15)*#WaveScale#),(-15*#WaveScale#),((200-15)*#WaveScale#),(15*#WaveScale#),0  | CurveTo (300*#WaveScale#),0,((300-100+15)*#WaveScale#),(-15*#WaveScale#),((300-15)*#WaveScale#),(15*#WaveScale#),0  | CurveTo (400*#WaveScale#),0,((400-100+15)*#WaveScale#),(-15*#WaveScale#),((400-15)*#WaveScale#),(15*#WaveScale#),0  | LineTo (#SW#+300*#Scale#),#SH# | LineTo 0,#SH# | ClosePath 1
Shape2=Rectangle ((#Stroke#*#Scale#)),((#Stroke#*#Scale#)),(#SW#-(#Stroke#*#Scale#)),(#SH#-#stroke#),((#Rounding#-#Stroke#)*#Scale#),((#Rounding#-#Stroke#)*#Scale#) | StrokeWidth 0
Shape3=Combine Shape | Intersect Shape2

[Hour2]
Meter=String
MeterStyle=String:S | Hour
FontColor=#MainColor#
Container=MaskWave
[MaskWave]
Meter=Shape
UpdateDivider=1
DynamicVariables=1
Shape=Path This | StrokeWidth 0 | StrokeColor #OppositeColor# | OffSet ((-200+200*[mLoop])*#Scale#),((#Stroke#*#Scale#)+#SH#-#SH#*[mSec]/60)
; This=(-200+200*[mLoop]),0 | CurveTo (100-200+200*[mLoop]),0,(45-200+200*[mLoop]),-45,(100-45-200+200*[mLoop]),45,0 | CurveTo (200-200+200*[mLoop]),0,(200-100+45-200+200*[mLoop]),-45,(200-45-200+200*[mLoop]),45,0  | CurveTo (300-200+200*[mLoop]),0,(300-100+45-200+200*[mLoop]),-45,(300-45-200+200*[mLoop]),45,0  | CurveTo (400-200+200*[mLoop]),0,(400-100+45-200+200*[mLoop]),-45,(400-45-200+200*[mLoop]),45,0  | LineTo (#SW#+300),#SH# | LineTo 0,#SH# | ClosePath 1
This=0,0 | CurveTo (100*#WaveScale#),0,(15*#WaveScale#),(-15*#WaveScale#),((100-15)*#WaveScale#),(15*#WaveScale#),0 | CurveTo (200*#WaveScale#),0,((200-100+15)*#WaveScale#),(-15*#WaveScale#),((200-15)*#WaveScale#),(15*#WaveScale#),0  | CurveTo (300*#WaveScale#),0,((300-100+15)*#WaveScale#),(-15*#WaveScale#),((300-15)*#WaveScale#),(15*#WaveScale#),0  | CurveTo (400*#WaveScale#),0,((400-100+15)*#WaveScale#),(-15*#WaveScale#),((400-15)*#WaveScale#),(15*#WaveScale#),0  | LineTo (#SW#+300*#Scale#),#SH# | LineTo 0,#SH# | ClosePath 1

[Hour3]
Meter=
MeterStyle=String:S
X=(#SW#/2)
Y=(60*#Scale#)
StringAlign=CenterCenter
DynamicVariables=1
Measurename=mHour
FontSize=(70*#Scale#)
FontColor=#OppositeColor#
FontFace=Roboto
UpdateDivider=1
Container=