; [Rainmeter]
; SolidColor=255,255,255,25
; BackgroundMode=2

[Variables]
@includeWeather=#@#Includes\GlobalWeather.inc


[mHour]
Measure=Time
Format=%#2412#:%M

[mDate]
Measure=Time
Format=%a, %d %b

[Hour]
Meter=String
MeterStyle=S | HourAlign#Align#
FontSize=(95*#Scale#)
FontFace=Roboto Thin
MeasureName=mHour
FontColor=255,255,255

[Date]
Meter=String
MeterStyle=S | DateAlign#Align#
Y=(150*#scale#)
FontSize=(14*#Scale#)
MeasureName=mDate
FontColor=255,255,255

[WeatherIcon]
Meter=Image
MeterStyle=WeatherAlign#Align#
Y=(10*#Scale#)R
W=(32*#Scale#)
H=(32*#Scale#)
ImageName=#@#Icons\JD Weather Icons\[mCurrentIcon].png
DynamicVariables=1

[WeatherText]
Meter=String
MeterStyle=S | TempAlign#Align#
Y=(32/2*#Scale#)r
FontSize=(14*#Scale#)
Text=%1%2
MeasureName=mCurrentTemperature
Measurename2=mUnitsTemperature

[HourAlignLeft]
StringAlign=Left
[HourAlignRight]
StringAlign=Right
X=(300*#Scale#)

[DateAlignLeft]
StringAlign=Left
X=(10*#Scale#)
[DateAlignRight]
StringAlign=Right
X=(290*#Scale#)

[WeatherAlignLeft]
X=r
[WeatherAlignRight]
X=(-32*#Scale#)r

[TempAlignLeft]
StringAlign=Leftcenter
X=5R
[TempAlignRight]
StringAlign=Rightcenter
X=(-5)r
