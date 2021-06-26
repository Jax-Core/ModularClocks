[Rainmeter]
ContextAction4=[!Delay 1000][!CommandMeasure ImageBlur Update]
ContextTitle4=Reload blur
DynamicWindowSize=1
[mL]
Measure=calc
UpdateDivider=-1
; onUpdateAction=[!Move (#SCREENAREAWIDTH#/2-(355*#Scale#)/2) (#SCREENAREAHEIGHT#/2-(475*#Scale#)/2)]

[mHour]
Measure=Time
Format=%I
; RegexpSubstitute=1
Substitute="01":"one","02":"two","03":"three","04":"four","05":"five","06":"six","07":"seven","08":"eight","09":"nine","10":"ten","11":"eleven","12":"twelve"
[mMinHead]
Measure=time
Format=%M
RegexpSubstitute=1
Substitute="^0":"Zero","^2":"Twenty","^3":"Thirty","^4":"Forty","^5":"Fifty","11":"Eleven","12":"Twelve","13":"Thirteen","14":"Forteen","15":"Fifteen","16":"Sixteen","17":"Seventeen","18":"Eighteen","19":"Ninteen","[1234567890]":""
[mMinTail]
Measure=time
Format=%M
RegexpSubstitute=1
Substitute="0$":".","[02345]1$":"one","[02345]2$":"two","[02345]3$":"three","[02345]4$":"four","[02345]5$":"five","[02345]6$":"six","[02345]7$":"seven","[02345]8$":"eight","[02345]9$":"nine","[1234567890]":""
[ImageBlur]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=File Screenshot@1 | Modulate 150,100,100 | Blur #BlurRadius#,#BlurSigma#
UpdateDivider=-1

[Hour]
Meter=String
MeasureName=mHour
Text=%1
FontFace=MetroPolis Semi Bold
FontSize=(50*#scale#)
MeterStyle=S
[Highlight]
Meter=String
X=R
MeasureName=mMinHead
Text=%1
FontFace=MetroPolis Semi Bold
FontSize=(50*#scale#)
MeterStyle=S
[Tail]
Meter=String
X=R
MeasureName=mMinTail
Text=%1
FontFace=MetroPolis Semi Bold
FontSize=(50*#scale#)
MeterStyle=S

[ImageMeter]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#)
Y=(-#CURRENTCONFIGY#)
UpdateDivider=1
COntainer=Hour
[ImageMeter2]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#-[Tail:X])
Y=(-#CURRENTCONFIGY#)
UpdateDivider=1
COntainer=Tail