[Rainmeter]
Update=-1

[Variables]
BarHandler=6
Scroll=0
Sec.AnchorName=AnchorSuppli

[LaunchVis]
Measure=Calc
onupdateaction=[!Delay 500][!EnableMeasureGroup NUOL]

;================================================================================================================================================================================

[Look]
Meter=String
Text=Selected rendering mode: (#Render#)
MeterStyle=Set.String:S | Set.OptionCat:S

[RenderStyle]
X=(15*[Set.S])R
Y=r
W=(([ContentContainer:W]-80*[Set.S])/3)
DynamicVariables=1
Container=ContentContainer
ImageName=#SKINSPATH#ModularCLocks\@Resources\Images\Preview\Render\#CURRENTSECTION#.png
Leftmouseupaction=[!WriteKeyValue Variables Render #CURRENTSECTION# "#Sec.SaveLocation#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
[Color]
Meter=Image
X=r
Y=(15*[Set.S])R
MeterStyle=RenderStyle
[Shadow]
Meter=Image
MeterStyle=RenderStyle
[Blur]
Meter=Image
MeterStyle=RenderStyle
; [Bar]
; Meter=Image
; MeterStyle=RenderStyle
; ImageAlpha=50
; Leftmouseupaction=[]

;================================================================================================================================================================================

[SmartOptipojs]
Meter=String
Text=#Render# Options
MeterStyle=Set.String:S | Set.OptionCat:S

@includeCore=#SKINSPATH##Skin.Name#\Core\Render\#Render#.inc

@includeVars=#SKINSPATH##Skin.Name#\Main\Styles\Vars\#Style#.inc


[Info:Look]
Meter=Shape
MeterStyle=Set.RectButton:S
Y=([Look:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Info01]
Meter=String
MeterStyle=Set.String:S | Set.Icon:S