[Rainmeter]
SkinWidth=#SW#
SkinHeight=#SH#

[Variables]
SW=(600*#Scale#)

[mMinHead]
OnChangeAction=[!Delay 100][!Commandmeasure GenerateImage "Update"][!UpdateMeter Image][!Redraw][!Log redrawn]

[GenerateImage]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=Text [mHour][mMinHead][mMinTail] | Align CenterCenter | Face @MetroPolis-SemiBold.otf | Canvas #SW#,#SW# | Color #OppositeColor# | Size (50*#Scale#) | OffSet (#SW#/2),(#SW#/2) | Shadow #ShadowOpacity#,#ShadowSigma#,#ShadowOffset# ; #MainColor#
UpdateDivider=-1

[Image]
Meter=Image
MeasureName=GenerateImage
UpdateDivider=-1
[Hour]
Meter=
[Highlight]
Meter=
[Tail]
Meter=