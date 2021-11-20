[Variables]
Sec.SaveLocation=#SKINSPATH##Skin.Name#\Main\Styles\Vars\#Style#.inc
Sec.SaveLocation2=#SKINSPATH##Skin.Name#\@Resources\Vars.inc
VersionPage=2

[Export:M]
Measure=String
OnUpdateAction=[!SetOption #Style# MeterStyle "Box:Selected"][!UpdateMeter #Style#][!Redraw]


[DefaultStartActions]
Custom2=[!UpdateMeterGroup PReload][!SHowMeterGroup V#VersionPage#][!UpdateMeter *][!Redraw][!SetOption AnchorSuppli Y [AnchorSuppli:Y]][!UpdateMeter AnchorSuppli][!Redraw]
[ContentContainer]
MouseScrollDownAction=[!SetVariable Scroll "(Clamp(#Scroll#-50,Clamp(#Set.H#-#Set.P#*2-[AnchorSuppli:Y], -1000, 0),0))"][!UpdateMeter *][!Redraw]
MouseScrollUpAction=[!SetVariable Scroll "(Clamp(#Scroll#+50,Clamp(#Set.H#-#Set.P#*2-[AnchorSuppli:Y], -1000, 0),0))"][!UpdateMeter *][!Redraw]

[Input2:M]
Measure=Plugin
Plugin=InputText
SolidColor=#Set.Pri_Color#
FontColor=#Set.Text_Color#
FontFace=Poppins
FontSize=(10*[Set.S])
StringAlign=LeftCenter
W=((150-10)*[Set.S])
H=((30-10)*[Set.S])
DynamicVariables=1
DefaultValue="[##Editing#]"
Command1=[!WriteKeyValue Variables "#Editing#" """$UserInput$""" "#Sec.SaveLocation2#"][!Refresh]

; ---------------------------------------------------------------------------- ;
;                             Pre-definted options                             ;
; ---------------------------------------------------------------------------- ;

[Animations]
Meter=String
Text=Animations
MeterStyle=Set.String:S | Set.OptionCat:S

[Option000]
Meter=String
Text=Animated update rate
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                  Style list                                  ;
; ---------------------------------------------------------------------------- ;

[Clock]
Meter=String
Text=Clock style // #Style#
MeterStyle=Set.String:S | Set.OptionCat:S

[Box]
Shape=Rectangle  0,0,(([ContentContainer:W]-120*[Set.S])/5),(([ContentContainer:W]-120*[Set.S])/5),#set.R# | StrokeWidth 0 | Extend Fill
Fill=Fill Color 255,255,255,10
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 255,255,255,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 255,255,255,10"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Leftmouseupaction=[!WriteKeyValue Variables Style #CURRENTSECTION# "#Sec.SaveLocation2#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
DynamicVariables=1
Container=ContentContainer
Group=Preload
Hidden=1
[Box:Selected]
Shape=Rectangle  0,0,(([ContentContainer:W]-120*[Set.S])/5),(([ContentContainer:W]-120*[Set.S])/5),#set.R# | StrokeWidth 0 | Extend Fill
Fill=Fill Color 255,255,255,80
DynamicVariables=1
Container=ContentContainer
Group=Preload
Hidden=1
[Center]
Meter=Shape
X=r
Y=(20*[Set.S])R
MeterStyle=Box
Group=V1
[Measure]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V1
[Graph]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V1
[Smart]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V1
[Text]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V1

[CircTech]
Meter=Shape
X=(30*[Set.S])
Y=r
MeterStyle=Box
Group=V2
[Tech]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V2
[Arc]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V2
[Light]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
Group=V2

[CenterPreview]
Meter=Image
Imagename=#SKINSPATH#ModularClocks\@Resources\Images\Preview\#CURRENTSECTION#.png
X=([Center:X])
Y=([Center:Y])
W=(([ContentContainer:W]-120*[Set.S])/5)
H=(([ContentContainer:W]-120*[Set.S])/5)
Solidcolor=0,0,0,1
DynamicVariables=1
Group=V1
Hidden=1

[MeasurePreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CenterPreview

[GraphPreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CenterPreview

[SmartPreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CenterPreview

[TextPreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CenterPreview

[CircTechPreview]
Meter=Image
Imagename=#SKINSPATH#ModularClocks\@Resources\Images\Preview\#CURRENTSECTION#.png
X=([Center:X])
Y=([Center:Y])
W=(([ContentContainer:W]-120*[Set.S])/5)
H=(([ContentContainer:W]-120*[Set.S])/5)
Solidcolor=0,0,0,1
DynamicVariables=1
Group=V2
Hidden=1

[TechPreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CircTechPreview

[ArcPreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CircTechPreview

[LightPreview]
Meter=Image
X=(20*[Set.S])R
Y=r
MeterStyle=CircTechPreview

[VersionBox]
Shape=Rectangle 0,0,(([ContentContainer:W]-60*[Set.S])/2),(30*[Set.S]),(10/2) | StrokeWidth 0 | Extend Fill
Fill=Fill Color 255,255,255,10
DynamicVariables=1
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 255,255,255,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 255,255,255,10"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Container=ContentContainer
Group=VersionBox
[Ver1]
Meter=Shape
X=(20*[Set.S])
Y=([Center:Y]+[Center:H]+[Light:H]-20*[Set.S])
MeterStyle=VersionBox
Leftmouseupaction=[!WriteKeyvalue Variables VersionPage 1 "#SKINSPATH##SKin.Name#\Core\Appearance.inc"][!Refresh]
[Ver1Text]
Meter=String
X=([Ver1:W]/2)r
Y=(15*[Set.S])r
FontSize=(10*[Set.S])
Text=Version 1 Styles
StringAlign=CenterCenter
Container=ContentContainer
MeterStyle=Set.String:S
[Ver2]
Meter=Shape
X=(([Ver1:W]/2)+20*[Set.S])r
Y=(-15*[Set.S])r
MeterStyle=VersionBox
Leftmouseupaction=[!WriteKeyvalue Variables VersionPage 2 "#SKINSPATH##SKin.Name#\Core\Appearance.inc"][!Refresh]
[Ver2Text]
Meter=String
Text=Version 2 Styles
MeterStyle=Set.String:S | Ver1Text

; ---------------------------------------------------------------------------- ;
;                                 Style options                                ;
; ---------------------------------------------------------------------------- ;

[SmartOptions]
Meter=String
Text=#Style# Options
; X=#Set.P#
; Y=([Ver2:YH])
MeterStyle=Set.String:S | Set.OptionCat:S

[Option01]
Meter=String
Text=Skin scaling
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                 Global input                                 ;
; ---------------------------------------------------------------------------- ;

[Rm.Update]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Int|0|50
Y=([Option000:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value000]
Meter=String
Text=#Rm.update#
MeterStyle=Set.String:S | Set.Value:S

[Scale]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Num|0.5|2
Y=([Option01:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value01]
Meter=String
Text=#Scale#
MeterStyle=Set.String:S | Set.Value:S

[Divider1328]
Meter=Shape
X=(30*[SEt.S])
Y=(30*[Set.S])r
MeterStyle=Set.Div:S

@includeCore=#SKINSPATH##Skin.Name#\Core\Appearance\#Style#.inc

@includeStyleVars=#SKINSPATH##Skin.Name#\Main\Styles\Vars\#Style#.inc
; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R
