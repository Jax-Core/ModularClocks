; ---------------------------------------------------------------------------- ;
;                                  MeterStyle                                  ;
; ---------------------------------------------------------------------------- ;
[Item.Shape:S]
X=(30*[Set.S])
Y=(35*[SEt.S])r
Shape=Rectangle 0,0,([ContentContainer:W]-#Set.P#),(50*[SEt.S]),(2*[Set.S]) | StrokeWidth 0 | Extend Fill
Fill=Fill Color #Set.Sec_Color#
Stroke=Stroke Color #Set.Ter_Color#
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Ter_Color#"][!SetOption #CURRENTSECTION# Stroke "Stroke Color #Set.Subtext_Color#,50"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Sec_Color#"][!SetOption #CURRENTSECTION# Stroke "Stroke Color #Set.Ter_Color#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
Container=ContentContainer
[Item.StringIcon:S]
X=(50*[Set.S]/2)r
Y=(50*[Set.S]/2)r
StringAlign=leftCenter
FontFace=Segoe Fluent Icons
Container=ContentContainer
[Item.String:S]
X=(#Set.P#/2)R
Y=r
StringAlign=LeftCenter
Container=ContentContainer
[Item.Arrow.String:S]
X=([ContentContainer:W]-#Set.P#)
Y=r
StringAlign=RightCenter
Text=>
Container=ContentContainer

; ---------------------------------------------------------------------------- ;
;                                    Content                                   ;
; ---------------------------------------------------------------------------- ;

[Look]
Meter=String
Text=Current render mode: #Render# for #Style# style
MeterStyle=Set.String:S | Set.OptionCat:S

[Item01.Shape]
Meter=Shape
Leftmouseupaction=["https://github.com/Jax-Core/ModularPlayers#installing-imagemagick"]
MeterStyle=Item.Shape:S
[Item01.StringIcon]
Meter=String
Text=[\xe7ba]
MeterStyle=Set.String:S | Item.StringIcon:S
[Item01.String]
Meter=String
Text=Blur render requires ImageMagick! Click here to learn how to install it.
MeterStyle=Set.String:S | Item.String:S
[Item01.Arrow.String]
Meter=String
MeterStyle=Set.String:S | Item.Arrow.String:S

[RenderStyle]
X=(15*[Set.S])R
Y=r
W=(([ContentContainer:W]-75*[Set.S])/3)
DynamicVariables=1
Container=ContentContainer
ImageName="#SKINSPATH#ModularCLocks\@Resources\Images\Preview\Render\#CURRENTSECTION#.png"
Leftmouseupaction=[!WriteKeyValue Variables Render #CURRENTSECTION# "#Sec.SaveLocation#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
[Color]
Meter=Image
X=(30*[Set.S])
Y=(55*[Set.S])r
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