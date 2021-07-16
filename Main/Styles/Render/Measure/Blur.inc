[Variables]
Sec.Ctx.Blur=1

[Shadow]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=Rectangle 0,0,(#SW#-(#Stroke#)),(#SH#-(#Stroke#)),(#Rounding#*#Scale#),(#Rounding#*#Scale#) | InnerShadow 75,(10*#scale#),0,0,1 ; #MainColor#
UpdateDivider=-1
[ImageBlur]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=File Screenshot@1 | Modulate 120,100,100 | Blur #BlurRadius#,#BlurSigma#
UpdateDivider=-1


[ShadowImage]
Meter=Image
X=(#Stroke#)
Y=(#Stroke#)
MeasureName=Shadow
[ImageMeter]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#)
Y=(-#CURRENTCONFIGY#)
UpdateDivider=50
COntainer=ActualWave
[Hour]
Meter=
[Hour2]
Meter=
[MaskWave]
Meter=
[Hour3]
Meter=String