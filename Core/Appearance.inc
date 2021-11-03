[Export2:M]
Measure=String
String=#VersionPage#
IfMatch=1
IfMatchAction=[!HideMeterGroup V2]
IfMatch2=2
IfMatchAction2=[!HideMeterGroup V1]

[Export:M]
Measure=String
OnUpdateAction=[!SetOption #Style# MeterStyle "Box:Selected"][!ShowMeterGroup #Style#][!UpdateMeter #Style#][!Redraw]

[Header]
Meter=String
X=(20*[Set.S])
Y=(20*[Set.S]+#Scroll#)
Text=Appearance /Clocks
FontSize=(20*[Set.S])
FontWeight=450
MeterStyle=Set.String:S
Container=ContentContainer
Leftmouseupaction=[!Refresh]
InlinePattern=\s(.*)
InlineSetting=Size | 10
InlinePattern2=\s(.*)
InlineSetting2=Color | 150,150,150

;================================================================================================================================================================================

[Variables]
VersionPage=1

;================================================================================================================================================================================

[Color]
Meter=String
Text=Color
MeterStyle=Set.String:S | Set.OptionCat:S

[Option00]
Meter=String
Text=Colors
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19w2sds0ssdsd]
Meter=Shape
MeterStyle=Set.Div:S
[Option000]
Meter=String
Text=Animated update rate
MeterStyle=Set.String:S | Set.OptionName:S

;================================================================================================================================================================================

[ColorMode:]
Meter=Shape
SecVar=ColorMode
0Act=[!CommandMeasure darkLight.Func "SwitchColor(0)"]
1Act=[!CommandMeasure darkLight.Func "SwitchColor(1)"]
MeterStyle=Set.Pick:S
Y=([Option00:Y]-#Set.P#+(-35/2+8)*[Set.S])
[ColorMode:0]
Meter=String
Text=Dark
FontColor=(#ColorMode# = 0 ? 0 : 255),(#ColorMode# = 0 ? 0 : 255),(#ColorMode# = 0 ? 0 : 255)
MeterStyle=Set.String:S | Set.PickOption_0:S
[ColorMode:1]
Meter=String
Text=Light
FontColor=(#ColorMode# = 1 ? 0 : 255),(#ColorMode# = 1 ? 0 : 255),(#ColorMode# = 1 ? 0 : 255)
MeterStyle=Set.String:S | Set.PickOption_1:S
; ;================================================================================================================================================================================

;================================================================================================================================================================================

[Clock]
Meter=String
Text=Clock style // #Style#
MeterStyle=Set.String:S | Set.OptionCat:S

[Box]
Shape=Rectangle  0,0,(([ContentContainer:W]-120*[Set.S])/5),(([ContentContainer:W]-120*[Set.S])/5),#set.R# | StrokeWidth 0 | Extend Fill
Fill=Fill Color 255,255,255,10
MouseOverAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 255,255,255,150"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Fill "Fill Color 255,255,255,10"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Leftmouseupaction=[!WriteKeyValue Variables Style #CURRENTSECTION# "#Sec.SaveLocation#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
DynamicVariables=1
Container=ContentContainer
[Box:Selected]
Shape=Rectangle  0,0,(([ContentContainer:W]-120*[Set.S])/5),(([ContentContainer:W]-120*[Set.S])/5),#set.R# | StrokeWidth 0 | Extend Fill
Fill=Fill Color 255,255,255,80
DynamicVariables=1
Container=ContentContainer
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


;================================================================================================================================================================================

[SmartOptions]
Meter=String
Text=#Style# Options
MeterStyle=Set.String:S | Set.OptionCat:S

[Option01]
Meter=String
Text=Skin scaling
MeterStyle=Set.String:S | Set.OptionName:S
[Divider1328]
Meter=Shape
MeterStyle=Set.Div:S
Group=Smart
Hidden=1
[Option02]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Align
MeterStyle=Set.String:S
Group=Smart
Hidden=1
Container=ContentContainer
[Divider19203s8]
Meter=Shape
MeterStyle=Set.Div:S
Group=Smart
Hidden=1
[Option03]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Weather
MeterStyle=Set.String:S
Group=Smart
Hidden=1
Container=ContentContainer
[Divider1920328]
Meter=Shape
Group=Smart
Hidden=1
MeterStyle=Set.Div:S
[Option04]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Date
MeterStyle=Set.String:S
Group=Smart
Hidden=1
Container=ContentContainer
[Divider19w20328]
Meter=Shape
MeterStyle=Set.Div:S
Group=Smart
Hidden=1
[Option05]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Date-Time scaling ratio
MeterStyle=Set.String:S
Group=Smart
Hidden=1
Container=ContentContainer



[Divider19w20328sdsd]
Meter=Shape
MeterStyle=Set.Div:S
Y=([Option01:Y]-#Set.P#+15*2)
DynamicVariables=1
Group=Measure
Hidden=1
[Option06]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Rotation (Hori / Vert)
MeterStyle=Set.String:S
Group=Measure
Hidden=1
Container=ContentContainer
[Divider19w20dsdaw328]
Meter=Shape
MeterStyle=Set.Div:S
Group=Measure
Hidden=1
[Option07]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Stroke width
MeterStyle=Set.String:S
Group=Measure
Hidden=1
Container=ContentContainer



[Divider19w20ssdsd]
Meter=Shape
MeterStyle=Set.Div:S
Y=([Option01:Y]-#Set.P#+15*2)
DynamicVariables=1
Group=Graph
Hidden=1
[Option08]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Show dot
MeterStyle=Set.String:S
Group=Graph
Hidden=1
Container=ContentContainer
[Divider19wdaw328]
Meter=Shape
MeterStyle=Set.Div:S
Group=Graph
Hidden=1
[Option09]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Line width
MeterStyle=Set.String:S
Group=Graph
Hidden=1
Container=ContentContainer

[Divider19w2sdsds0ssdsd]
Meter=Shape
MeterStyle=Set.Div:S
Y=([Option01:Y]-#Set.P#+15*2)
DynamicVariables=1
Group=Tech
Hidden=1
[Option11]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Show additional time details
MeterStyle=Set.String:S
Group=Tech
Hidden=1
Container=ContentContainer
[Divider19wdwqeqewqeqweaw328]
Meter=Shape
MeterStyle=Set.Div:S
Group=Tech
Hidden=1
[Option12]
Meter=String
X=r
Y=(15*[Set.S])R
FontSize=(10*[Set.S])
Text=Use the runic font
MeterStyle=Set.String:S
Group=Tech
Hidden=1
Container=ContentContainer

; ;================================================================================================================================================================================

;; BOOL EXMAPLE
; [BoolVarName]
; Meter=Shape
; MeterStyle=Set.Bool:S
; Y=([VarOption:Y]-#Set.P#+(-20/2+8)*[Set.S])

;; TEXT INPUT EXAMPLE
; [TextVarName]
; Meter=Shape
; MeterStyle=Set.TextBox:S
; Y=([VarOption:Y]-#Set.P#+(-30/2+8)*[Set.S])
; [VarOptionNumber]
; Meter=String
; Text=TextVarName
; MeterStyle=Set.String:S | Set.Value:S
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

[Align]
Meter=Shape
MeterStyle=Set.TextBox:S
Group=Smart
Hidden=1
Type=Txt
Y=([Option02:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value02]
Meter=String
Text=#Align#
Group=Smart
Hidden=1
MeterStyle=Set.String:S | Set.Value:S

[Weather]
Meter=Shape
MeterStyle=Set.Bool:S
Group=Smart
Hidden=1
Y=([Option03:Y]-#Set.P#+(-20/2+8)*[Set.S])

[Date]
Meter=Shape
MeterStyle=Set.Bool:S
Group=Smart
Hidden=1
Y=([Option04:Y]-#Set.P#+(-20/2+8)*[Set.S])

[DateTimeRatio]
Meter=Shape
MeterStyle=Set.TextBox:S
Group=Smart
Hidden=1
Type=Num|0.1|2
Y=([Option05:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value05]
Meter=String
Text=#DateTimeRatio#
Group=Smart
Hidden=1
MeterStyle=Set.String:S | Set.Value:S

[Rotation]
Meter=Shape
MeterStyle=Set.TextBox:S
Group=Measure
Hidden=1
Type=Txt
Y=([Option06:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value06]
Meter=String
Text=#Rotation#
Group=Measure
Hidden=1
MeterStyle=Set.String:S | Set.Value:S

[Stroke]
Meter=Shape
MeterStyle=Set.TextBox:S
Group=Measure
Hidden=1
Type=Int|0|5
Y=([Option07:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value07]
Meter=String
Text=#Stroke#
Group=Measure
Hidden=1
MeterStyle=Set.String:S | Set.Value:S

[Circle]
Meter=Shape
MeterStyle=Set.Bool:S
Group=Graph
Hidden=1
Y=([Option08:Y]-#Set.P#+(-20/2+8)*[Set.S])

[LineWidth]
Meter=Shape
MeterStyle=Set.TextBox:S
Group=Graph
Hidden=1
Type=Int|0|20
Y=([Option09:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value09]
Meter=String
Text=#LineWidth#
Group=Graph
Hidden=1
MeterStyle=Set.String:S | Set.Value:S


[ShowDetails]
Meter=Shape
MeterStyle=Set.Bool:S
Group=Tech
Hidden=1
Y=([Option11:Y]-#Set.P#+(-20/2+8)*[Set.S])

[Runic]
Meter=Shape
MeterStyle=Set.Bool:S
Group=Tech
Hidden=1
Y=([Option12:Y]-#Set.P#+(-20/2+8)*[Set.S])
