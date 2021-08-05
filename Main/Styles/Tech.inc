[Rainmeter]
; SolidColor=255,255,255,25
; BackgroundMode=2
Update=#Rm.Update#
DefaultUpdateDivider=-1
SkinWidth=#SW#
SkinHeight=#SH#

[Variables]
; @includeWeather=#@#Includes\GlobalWeather.inc
SW=((500+250*#Showdetails#)*#Scale#)
SH=(500*#Scale#)

[String:S]
FontFace=a Astro Space

[mTime]
Measure=Time
Format=%#2412#%M
DynamicVariables=1
UpdateDivider=(1000/#Rm.Update#)
[mSecA]
Measure=Time
Format=%S
AverageSize=30
MaxValue=60
UpdateDivider=1
[mSec]
Measure=Calc
Formula=(mSecA%60)
MaxValue=60
UpdateDivider=1
; RegexpSubstitute=1
; Substitute="^0$":"0"
; [mSecCalc]
; MEasure=Calc
; Formula=(mSec-30 <= 0 ? 1 : mSec-30)
; [mBars]
; Measure=String
; String=||||||||||||||||||||||||||||||
; RegexpSubstitute=1
; DynamicVariables=1
; Substitute="^(.{[mSec]}).*":"\1"
; [mBars2]
; Measure=String
; String=||||||||||||||||||||||||||||||
; RegexpSubstitute=1
; DynamicVariables=1
; Substitute="^(.{[mSecCalc]}).*":"\1"

[ResizeImage]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=File #@#Images\Tech.png | RenderSize (#SH#),(#SH)
ExportTo=#@#Export\Tech.png
UpdateDivider=-1

; [Tri]
; Meter=Image
; W=#SH#
; H=#SH#
; ImageName=#@#Images\Tech.png
; DynamicVariables=-1
; UpdateDivider=-1

[Tri]
Meter=Image
W=#SH#
H=#SH#
ImageName=#@#Export\Tech.png
DynamicVariables=-1
UpdateDivider=-1

[Time]
Meter=String
X=(#SH#/2)
Y=(255*#scale#)
Measurename=mTime
FontSize=(30*#scale#)
FontColor=255, 230, 55
MeterStyle=String:S
StringAlign=CenterCenter
StringEffect=Border
FontEffectColor=81, 55, 20
UpdateDivider=(1000/#Rm.Update#)
FontWeight=200
FontFace=a Astro Space
UpdateDivider=(1000/#Rm.Update#)

[SecArc]
Meter=Roundline
MEasureName=mSec
W=(#SH#)
H=(#SH#)
LineLength=(93*#scale#)
LineStart=(90*#scale#)
StartAngle=(Rad(270))
RotationAngle=(Rad(360))
LineColor=251, 216, 0
Solid=1
AntiAlias=1
UpdateDivider=1

; ---------------------------------------------------------------------------- ;
;                                    Details                                   ;
; ---------------------------------------------------------------------------- ;

[Details:S]
X=r
Y=R
FontSize=(15*#scale#)
FontColor=255, 230, 55
StringEffect=Border
FontEffectColor=81, 55, 20
InlinePattern=\d
InlineSetting=Face | a Astro Space
InlinePattern2=\d
InlineSetting2=Size | (14*#scale#)
InlinePattern3=//.*
InlineSetting3=Color | 143, 127, 30
UpdateDivider=(1000/#Rm.Update#)
FontWeight=200
Hidden=(1-#Showdetails#)
[Runic1]
FontFace=Runic

[mTimeZone]
Measure=Time
Format=%Z %z
UpdateDivider=-1
Substitute="+":""
[mDate]
Measure=Time
Format=%e %A %B %G
RegexpSubstitute=1
Substitute="\s2(...)$":" 3\1"
[mYearDate]
Measure=Time
Format=%jdays %Vweeks
UpdateDivider=-1

[TimeZone]
Meter=String
X=(400*#scale#)
Y=(225*#scale#)
Measurename=mTimeZone
Text=%1 // timezone
MeterStyle=String:S | Details:S | Runic#Runic#
[Date]
Meter=String
X=(390*#scale#)
Y=(260*#scale#)
Measurename=mDate
Text=%1 // date
MeterStyle=String:S | Details:S | Runic#Runic#
[YearDate]
Meter=String
X=(-10*#scale#)r
Measurename=mYearDate
Text=%1 // yrDate
MeterStyle=String:S | Details:S | Runic#Runic#
