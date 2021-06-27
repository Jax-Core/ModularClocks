



[Shadow]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=Rectangle 0,0,(#SW#-(#Stroke#)),(#SH#-(#Stroke#)),(#Rounding#*#Scale#),(#Rounding#*#Scale#) | InnerShadow 75,(10*#Scale#),0,0,1 ; #MainColor#
UpdateDivider=-1
[ShadowImage]
Meter=Image
X=(#Stroke#)
Y=(#Stroke#)
MeasureName=Shadow