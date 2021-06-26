[Rainmeter]
SolidColor=#MainColor#,200
BackgroundMode=2
AccurateText=1
SkinWidth=#SCREENAREAWIDTH#
SkinHeight=(40*#Scale#)
Onrefreshaction=[!Move 0 (#SCREENAREAHEIGHT#-40*#Scale#)]

[mFG]
Measure=Plugin
Plugin=FrostedGlass
Blur=Acrylic

[mHour]
Measure=Time
Format=%H:%M

[mDate]
Measure=Time
Format=%a, %d %b

[Background]

[Hour]
Meter=String
MeterStyle=S
FontSize=(20*#Scale#)
FontFace=Roboto Thin
MeasureName=mHour
X=(#SCREENAREAWIDTH#/2)
Y=(22*#Scale#)
StringAlign=CenterCenter

[Date]
Meter=String
MeterStyle=S
Y=(150*#scale#)
FontSize=(14*#Scale#)
MeasureName=mDate
FontColor=255,255,255
