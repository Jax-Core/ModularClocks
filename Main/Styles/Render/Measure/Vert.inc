[Variables]
SW=(100*#Scale#)
SH=(400*#Scale#)
WaveScale=(#Scale#*1)


[Hour]
Meter=String
MeterStyle=String:S
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

[ActualWave]
Meter=Shape
UpdateDivider=1
DynamicVariables=1
Shape=Path This | StrokeWidth 0 | StrokeColor #OppositeColor# | OffSet ((-200+200*[mLoop])*#Scale#),((#Stroke#*#Scale#)+#SH#-#SH#*[mSec]/60) | Extend Fill
Fill=Fill Color #Oppositecolor#,245
; This=(-200+200*[mLoop]),0 | CurveTo (100-200+200*[mLoop]),0,(25-200+200*[mLoop]),-25,(100-25-200+200*[mLoop]),25,0 | CurveTo (200-200+200*[mLoop]),0,(200-100+25-200+200*[mLoop]),-25,(200-25-200+200*[mLoop]),25,0  | CurveTo (300-200+200*[mLoop]),0,(300-100+25-200+200*[mLoop]),-25,(300-25-200+200*[mLoop]),25,0  | CurveTo (400-200+200*[mLoop]),0,(400-100+25-200+200*[mLoop]),-25,(400-25-200+200*[mLoop]),25,0  | LineTo (#SW#+300),#SH# | LineTo 0,#SH# | ClosePath 1
This=0,0 | CurveTo (100*#WaveScale#),0,(25*#WaveScale#),(-25*#WaveScale#),((100-25)*#WaveScale#),(25*#WaveScale#),0 | CurveTo (200*#WaveScale#),0,((200-100+25)*#WaveScale#),(-25*#WaveScale#),((200-25)*#WaveScale#),(25*#WaveScale#),0  | CurveTo (300*#WaveScale#),0,((300-100+25)*#WaveScale#),(-25*#WaveScale#),((300-25)*#WaveScale#),(25*#WaveScale#),0  | CurveTo (400*#WaveScale#),0,((400-100+25)*#WaveScale#),(-25*#WaveScale#),((400-25)*#WaveScale#),(25*#WaveScale#),0  | LineTo (#SW#+300*#WaveScale#),#SH# | LineTo 0,#SH# | ClosePath 1
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
; This=(-200+200*[mLoop]),0 | CurveTo (100-200+200*[mLoop]),0,(25-200+200*[mLoop]),-25,(100-25-200+200*[mLoop]),25,0 | CurveTo (200-200+200*[mLoop]),0,(200-100+25-200+200*[mLoop]),-25,(200-25-200+200*[mLoop]),25,0  | CurveTo (300-200+200*[mLoop]),0,(300-100+25-200+200*[mLoop]),-25,(300-25-200+200*[mLoop]),25,0  | CurveTo (400-200+200*[mLoop]),0,(400-100+25-200+200*[mLoop]),-25,(400-25-200+200*[mLoop]),25,0  | LineTo (#SW#+300),#SH# | LineTo 0,#SH# | ClosePath 1
This=0,0 | CurveTo (100*#WaveScale#),0,(25*#WaveScale#),(-25*#WaveScale#),((100-25)*#WaveScale#),(25*#WaveScale#),0 | CurveTo (200*#WaveScale#),0,((200-100+25)*#WaveScale#),(-25*#WaveScale#),((200-25)*#WaveScale#),(25*#WaveScale#),0  | CurveTo (300*#WaveScale#),0,((300-100+25)*#WaveScale#),(-25*#WaveScale#),((300-25)*#WaveScale#),(25*#WaveScale#),0  | CurveTo (400*#WaveScale#),0,((400-100+25)*#WaveScale#),(-25*#WaveScale#),((400-25)*#WaveScale#),(25*#WaveScale#),0  | LineTo (#SW#+300*#WaveScale#),#SH# | LineTo 0,#SH# | ClosePath 1

[Hour3]
Meter=
MeterStyle=String:S
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