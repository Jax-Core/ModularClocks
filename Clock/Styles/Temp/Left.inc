
[mL]
Measure=calc
UpdateDivider=-1
onUpdateAction=

[mHour]
Measure=Time
Format=%#2412#:%M
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
FontSize=(100*#Scale#)
FontWeight=450
StringAlign=Left
MeasureName=mHour
FontColor=[CFG1]
FontColor=255,255,255
DynamicVariables=1
; Text=00:00
; SolidColor=255,255,255,20