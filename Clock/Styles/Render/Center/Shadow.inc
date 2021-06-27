
[mMin]
OnChangeAction=[!Commandmeasure GenerateImage "Update"][!UpdateMeter Image][!Redraw]

[GenerateImage]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=Text [mHour]#CRLF#[mMin] | Align CenterCenter | Face @Roboto.otf | Canvas #SW#,#SW# | Color #OppositeColor# | Weight 450 | Size (200*#Scale#) | LineSpacing (-90*#Scale#) | OffSet (#SW#/2),(#SW#/2) | Shadow #ShadowOpacity#,#ShadowSigma#,#ShadowOffset# ; #MainColor#
UpdateDivider=-1

[Image]
Meter=Image
MeasureName=GenerateImage
UpdateDivider=-1
[Hour]
Meter=
[MIn]
Meter=