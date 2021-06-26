[Rainmeter]
SkinWidth=(350*#Scale#)
SkinHeight=(470*#Scale#)


[mL]
Measure=calc
UpdateDivider=-1
onUpdateAction=[!WriteKeyValue "#CURRENTCONFIG#" AnchorX "50%" "#SETTINGSPATH#Rainmeter.ini"][!WriteKeyValue "#CURRENTCONFIG#" AnchorY "50%" "#SETTINGSPATH#Rainmeter.ini"][!WriteKeyValue "#CURRENTCONFIG#" WindowX "(#SCREENAREAWIDTH#/2)" "#SETTINGSPATH#Rainmeter.ini"][!WriteKeyValue "#CURRENTCONFIG#" WindowY "(#SCREENAREAHEIGHT#/2)" "#SETTINGSPATH#Rainmeter.ini"]

[mHour]
Measure=Time
Format=%H
[mMin]
Measure=Time
Format=%M

[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop
[CFG1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=Foreground1

[Hour]
Meter=String
MeterStyle=S
FontSize=(200*#Scale#)
X=(200*#Scale#)
Y=(150*#Scale#)
FontWeight=450
StringAlign=CenterCenter
MeasureName=mHour
FontColor=[CFG1]
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
FontColor=[CFG1]
DynamicVariables=1
; Text=00
; SolidColor=255,255,255,20