[Rainmeter]
ContextAction5=[!Delay 1000][!CommandMeasure ImageBlur Update]
ContextTitle5=Reload blur

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
X=(-#CURRENTCONFIGX#)
Y=(-#CURRENTCONFIGY#)
UpdateDivider=50
COntainer=Graph

[Graph]
Fill=Stroke Color 0,0,0
Circle=StrokeWidth 0 | Fill Color 0,0,0