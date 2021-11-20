[Rainmeter]
; SolidColor=255,255,255,25
; BackgroundMode=2
SkinWidth=#SW#
SkinHeight=#SH#

[Variables]
; @includeWeather=#@#Includes\GlobalWeather.inc
SW=(500*#Scale#)
SH=(250*#Scale#)

[String:S]
FontFace=Martel Light

[mTime]
Measure=
[mDate]
Measure=Time
Format=%Y | %m | %d
[mWeekday]
Measure=Time
Format=%A
FormatLocale=Local
[mTimeZone]
Measure=Time
Format=%Z
FormatLocale=Local
[mHour]
Measure=Time
Format=%I
; RegexpSubstitute=1
Substitute="01":"ONE","02":"TWO","03":"THREE","04":"FOUR","05":"FIVE","06":"SIX","07":"SEVEN","08":"EIGHT","09":"NINE","10":"TEN","11":"ELEVEN","12":"TWELVE"
[mMinHead]
Measure=time
Format=%M
RegexpSubstitute=1
Substitute="^0":"ZERO","^2":"TWENTY","^3":"THIRTY","^4":"FORTY","^5":"FIFTY","10":"TEN","11":"ELEVEN","12":"TWELVE","13":"THIRTEEN","14":"FOURTEEN","15":"FIFTEEN","16":"SIXTEEN","17":"SEVENTEEN","18":"EIGHTEEN","19":"NINTEEN","[1234567890]":""
[mMinTail]
Measure=time
Format=%M
RegexpSubstitute=1
; Substitute=".*":"yo"
Substitute="0$":"","[02345]1$":"ONE","[02345]2$":"TWO","[02345]3$":"THREE","[02345]4$":"FOUR","[02345]5$":"FIVE","[02345]6$":"SIX","[02345]7$":"SEVEN","[02345]8$":"EIGHT","[02345]9$":"NINE","[1234567890]":""

[Time]
Meter=String
X=(20*#scale#)
FontFace=Raleway Thin
MeasureName=mWeekday
FontSize=(60*#scale#)
InlineSetting=CharacterSpacing | 2 | 2
MeterStyle=String:S
FontColor=#Primarycolor#,#PrimaryOpacity#

[BarShape]
Meter=Shape
X=0
Y=(10*#scale#)R
Shape=Line 0,0,465,0 | StrokeColor #Primarycolor#,#PrimaryOpacity# |  StrokeWidth 2 | StrokeStartCap Round | StrokeEndCap Round | Scale #Scale#,1,0,0
Shape2=Ellipse (480*#scale#),0,4 | Fill Color #Primarycolor#,#PrimaryOpacity# | StrokeWidth 0 | Scale #Scale#,#Scale#

[WeatherText]
Meter=String
MeterStyle=String:S
X=(20*#scale#)
Y=(30*#Scale#)R
Text=%1 %2 %3#CRLF#%4
FontSize=(11*#scale#)
InlineSetting=CharacterSpacing | 4 | 4
Inlinepattern2=#CRLF#.*
InlineSetting2=CharacterSpacing | 1 | 1
Inlinepattern3=#CRLF#.*
InlineSetting3=Size | (9*#Scale#)
MeasureName=mHour
MeasureName2=mMinHead
Measurename3=mMinTail
MeasureName4=mTimeZone
FontColor=#Primarycolor#,#PrimaryOpacity#

[DateText]
Meter=String
MeterStyle=String:S
X=r
Y=(10*#scale#)R
FontSize=(10*#scale#)
Text=%1
MeasureName=mDate
DynamicVariables=1
FontColor=#Primarycolor#,#PrimaryOpacity#