[Rainmeter]
SkinWidth=(355*#Scale#)
SkinHeight=(475*#Scale#)
ContextAction4=[!Delay 1000][!CommandMeasure ImageBlur Update]
ContextTitle4=Reload blur

[mL]
Measure=calc
UpdateDivider=-1
; onUpdateAction=[!Move (#SCREENAREAWIDTH#/2-(355*#Scale#)/2) (#SCREENAREAHEIGHT#/2-(475*#Scale#)/2)]

[mHour]
Measure=Time
Format=%H
[mMin]
Measure=Time
Format=%M

[ImageBlur]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=File Screenshot@1 | Modulate #Brightness#,100,100 | Blur #BlurRadius#,#BlurSigma#
UpdateDivider=-1

[Hour]
Meter=String
MeterStyle=S
FontSize=(200*#Scale#)
X=(200*#Scale#)
Y=(150*#Scale#)
FontWeight=450
StringAlign=CenterCenter
MeasureName=mHour
FontColor=255,255,255
DynamicVariables=1
; Text=00
; SolidColor=255,255,255,20
[Min]
Meter=String
MeterStyle=S
X=r
Y=(360*#Scale#)
FontSize=(200*#Scale#)
StringAlign=CenterCenter
FontWeight=450
MeasureName=mMIn
DynamicVariables=1
; Text=00
; SolidColor=255,255,255,20

[ImageMeter]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#-200*#Scale#)
Y=(-#CURRENTCONFIGY#-150*#Scale#)
UpdateDivider=1
COntainer=Hour
[ImageMeter2]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#-200*#Scale#)
Y=(-#CURRENTCONFIGY#-360*#Scale#)
UpdateDivider=1
COntainer=Min