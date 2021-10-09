[ChameleonDesktop]
Measure=Plugin
Plugin=Chameleon
Type=Desktop
UpdateDivider=#ChameleonSampleRate#
[Color1]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=#ChameleonSource#1
UpdateDivider=#ChameleonSampleRate#
[Color2]
Measure=Plugin
Plugin=Chameleon
Parent=ChameleonDesktop
Color=#ChameleonSource#2
UpdateDivider=#ChameleonSampleRate#

[Fill:Chameleon]
FontColor=[Color1]
Group=Strings
DynamicVariables=1

[ExportGradient]
Measure=Calc
Formula=#ChameleonGraident#
IfCondition=ExportGradient = 1
IfTrueAction=[!SetOptionGroup Strings InlineSetting "GradientColor | #GradientAngle# | [*Color1*] ; 0.0 | [*Color2*] ; 1.0"][!UpdateMeter *][!Redraw]
UpdateDivider=-1