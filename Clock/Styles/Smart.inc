[Rainmeter]
ContextAction=[!Move (#SCREENAREAWIDTH#/2-(315/2*#Scale#)) (#SCREENAREAHEIGHT#/2-(480/2*#Scale#))]
DynamicWindowSize=1
; SolidColor=255,255,255,25
; BackgroundMode=2

[Variables]
@includeWeather=#@#Includes\GlobalWeather.inc

[mL]
Measure=calc
UpdateDivider=-1
; onUpdateAction=[!WriteKeyValue "#CURRENTCONFIG#" AnchorX "50%" "#SETTINGSPATH#Rainmeter.ini"][!WriteKeyValue "#CURRENTCONFIG#" AnchorY "50%" "#SETTINGSPATH#Rainmeter.ini"][!WriteKeyValue "#CURRENTCONFIG#" WindowX "(#SCREENAREAWIDTH#/2)" "#SETTINGSPATH#Rainmeter.ini"][!WriteKeyValue "#CURRENTCONFIG#" WindowY "(#SCREENAREAHEIGHT#/2)" "#SETTINGSPATH#Rainmeter.ini"]

[mTime]
Measure=Time
Format=%H:%M
[mDate]
Measure=Time
Format=%a, %d %b

[Time]
Meter=String
MeasureName=mTime
FontFace=MetroPolis Semi Bold
FontSize=(100*#scale#)
X=(315/2*#Scale#)
StringAlign=Center
MeterStyle=S


; [Date]
; Meter=String
; MeterStyle=S | DateAlign#SideOrientation#
; Y=(150*#scale#)
; FontSize=(14*#Scale#)
; MeasureName=mDate
; FontColor=255,255,255

[WeatherIcon]
Meter=Image
MeterStyle=WeatherAlign#SideOrientation#
X=(-([WeatherText:W]+50)/2*#Scale#+#CURRENTCONFIGWIDTH#/2)
Y=R
W=(50*#Scale#)
H=(50*#Scale#)
ImageName=#@#Icons\JD Weather Icons\[mCurrentIcon].png
DynamicVariables=1

[WeatherText]
Meter=String
MeterStyle=S
Y=(50/2*#Scale#)r
X=5R
FontSize=(20*#Scale#)
Text=%1%2
FontFace=MetroPolis Semi Bold
StringAlign=LeftCenter
MeasureName=mCurrentTemperature
Measurename2=mUnitsTemperature


[DateText]
Meter=String
MeterStyle=S
Y=R
X=(#CURRENTCONFIGWIDTH#/2)
FontSize=(12*#Scale#)
Text=%1
FontFace=MetroPolis Semi Bold
StringAlign=Center
MeasureName=mDate
DynamicVariables=1