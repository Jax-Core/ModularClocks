[Rainmeter]
ContextAction5=[!Delay 1000][!CommandMeasure ImageBlur Update]
ContextTitle5=Reload blur

[ImageBlur]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=File Screenshot@1 | Modulate 150,100,100 | Blur #BlurRadius#,#BlurSigma#
UpdateDivider=-1
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
