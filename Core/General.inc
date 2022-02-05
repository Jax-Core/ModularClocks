

[Export:M]
Measure=String
OnUpdateAction=[!SetOption #Style# MeterStyle "Box:Selected"][!UpdateMeter #Style#][!UpdateMeterGroup Preload][!UpdateMeterGroup PreviewImages][!SHowMeterGroup Preload][!ShowMeterGroup PreviewImages]

; ---------------------------------------------------------------------------- ;
;                             Pre-definted options                             ;
; ---------------------------------------------------------------------------- ;

[Animations]
Meter=String
Text=
MeterStyle=Set.String:S | Set.OptionCat:S

[Option000]
Meter=String
Text=Animated update rate
MeterStyle=Set.String:S | Set.OptionName:S
[Div:w]
Meter=Shape
MeterStyle=Set.Div:S
[Option0000]
Meter=String
Text=Change hour format
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
Fill=Fill Color #Set.Text_Color#,10
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Text_Color#,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color #Set.Text_Color#,10"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Leftmouseupaction=[!WriteKeyValue Variables Style #CURRENTSECTION# "#Sec.SaveLocation#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
DynamicVariables=1
Container=ContentContainer
Group=Preload
Hidden=1
[Box:Selected]
Shape=Rectangle  0,0,(([ContentContainer:W]-120*[Set.S])/5),(([ContentContainer:W]-120*[Set.S])/5),#set.R# | StrokeWidth 0 | Extend Fill
Fill=Fill Color #Set.Text_Color#,80
DynamicVariables=1
Container=ContentContainer
Group=Preload
Hidden=1
[Center]
Meter=Shape
X=r
Y=(20*[Set.S])R
MeterStyle=Box
[Measure]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
[Graph]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
[Smart]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
[Text]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box

[CircTech]
Meter=Shape
X=(30*[Set.S])
Y=(20*[Set.S])R
MeterStyle=Box
[Tech]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
[Arc]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box
[Light]
Meter=Shape
X=(20*[Set.S])R
Y=r
MeterStyle=Box

[CenterPreview]
Meter=Image
Imagename=#SKINSPATH#ModularClocks\@Resources\Images\Preview\#CURRENTSECTION#.png
X=([Center:X])
Y=([Center:Y])
W=(([ContentContainer:W]-120*[Set.S])/5)
H=(([ContentContainer:W]-120*[Set.S])/5)
Solidcolor=0,0,0,1
DynamicVariables=1
Group=PreviewImages
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
X=([CircTech:X])
Y=([CircTech:Y])
W=(([ContentContainer:W]-120*[Set.S])/5)
H=(([ContentContainer:W]-120*[Set.S])/5)
Solidcolor=0,0,0,1
DynamicVariables=1
Group=PreviewImages
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


[Further]
Meter=String
Text=Customization
MeterStyle=Set.String:S | Set.OptionCat:S

[Option0]
Meter=String
Text=Further customize the clock in the appearance tab
MeterStyle=Set.String:S | Set.OptionName:S

[Rm.Update]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Int|0|50
Y=([Option000:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value000]
Meter=String
Text=#Rm.update#
MeterStyle=Set.String:S | Set.Value:S

[Button11]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option0000:Y]-#Set.P#+(-30/2+8)*[Set.S])
Act=[!WriteKeyvalue Variables Skin.Name """#JaxCore""" "#@#SecVar.inc"][!WriteKeyvalue Variables Skin.Set_Page GlobalVars "#@#SecVar.inc"][!Refresh]
[Icon11]
Meter=String
Text=[\xe895]
FontFace=Material Icons Round
FontSize=(14*[Set.S])
FontColor=#Set.Subtext_Color#
MeterStyle=Set.String:S | Set.Value:S
[Value11]
Meter=String
X=(-25*[Set.S])r
Y=r
Text=Change global variable
FontColor=#Set.Subtext_Color#
MeterStyle=Set.String:S | Set.Value:S