[Variables]
Sec.Ctx.Blur=1

[ImageBlur]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=File Screenshot@1 | Modulate #BlurModulate# | Blur #BlurRadius#,#BlurSigma#
UpdateDivider=-1


[ImageMeter]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#-250*#Scale#)
Y=(-#CURRENTCONFIGY#-170*#Scale#)
UpdateDivider=1
COntainer=Hour
[ImageMeter2]
Meter=Image
MeasureName=ImageBlur
DynamicVariables=1
X=(-#CURRENTCONFIGX#-200*#Scale#)
Y=(-#CURRENTCONFIGY#-380*#Scale#)
UpdateDivider=1
COntainer=Min