[Rainmeter]
; SolidColor=255,255,255,25
; BackgroundMode=2
DynamicWindowSize=1

[Variables]
Scale=1

[mMin]
Measure=Time
Format=%M
MaxValue=60
[mHour]
Measure=Time
Format=%#2412#
MaxValue=24

[Time2]
Meter=String
MeasureName=mHour
MeasureName2=mMin
FontColor=#OppositeColor#,150
Text=%1%2
; Text=0000
FontFace=MetroPolis Semi Bold
FontSize=(100*#scale#)
MeterStyle=S

[Hour]
Meter=String
MeasureName=mHour
FontFace=MetroPolis Semi Bold
FontSize=(100*#scale#)
MeterStyle=S
[Min]
Meter=String
MeasureName=mMin
X=R
FontFace=MetroPolis Semi Bold
FontSize=(100*#scale#)
MeterStyle=S

[Bar1]
Meter=Shape
Shape=Rectangle 0,(109*#Scale#),(200*#scale#),((-100*[mHour]/24)*#scale#) | Fill Color #OppositeColor# | StrokeWidth 0
Container=Hour

[Bar2]
Meter=Shape
Shape=Rectangle 0,(109*#scale#),(200*#scale#),((-100*[mMin]/60*#scale#)) | Fill Color #OppositeColor# | StrokeWidth 0
Container=Min
