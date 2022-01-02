
[Option01]
Meter=String
Text=Opacity
MeterStyle=Set.String:S | Set.OptionName:S

[Divider1328]
Meter=Shape
MeterStyle=Set.Div:S

[Option02]
Meter=String
Text=Sigma
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19203s8]
Meter=Shape
MeterStyle=Set.Div:S

[Option03]
Meter=String
Text=Offset
MeterStyle=Set.String:S | Set.OptionName:S
[Divider193s8]
Meter=Shape
MeterStyle=Set.Div:S

[Option04]
Meter=String
Text=Color mode
MeterStyle=Set.String:S | Set.OptionName:S


; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;


[ShadowOpacity]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option01:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value01]
Meter=String
Text=#ShadowOpacity#
MeterStyle=Set.String:S | Set.Value:S

[ShadowSigma]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option02:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value02]
Meter=String
Text=#ShadowSigma#
MeterStyle=Set.String:S | Set.Value:S

[ShadowOffset]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option03:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value03]
Meter=String
Text=#ShadowOffset#
MeterStyle=Set.String:S | Set.Value:S

[ColorMode:]
Meter=Shape
SecVar=ColorMode
0Act=[!WriteKeyValue Variables ColorMode "0" "#Sec.SaveLocation#"][!WriteKeyValue Variables MainColor "12,12,12" "#Sec.SaveLocation#"][!WriteKeyValue Variables OppositeColor "255,255,255" "#Sec.SaveLocation#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
1Act=[!WriteKeyValue Variables ColorMode "1" "#Sec.SaveLocation#"][!WriteKeyValue Variables MainColor "255,255,255" "#Sec.SaveLocation#"][!WriteKeyValue Variables OppositeColor "12,12,12" "#Sec.SaveLocation#"][!Refresh][!UpdateMeasure Auto_Refresh:M]
MeterStyle=Set.Pick:S
Y=([Option04:Y]-#Set.P#+(-35/2+8)*[Set.S])
[ColorMode:0]
Meter=String
Text=Dark
FontColor=[&Func:returnBool('ColorMode', '1', '#Set.Text_Color#', '#Set.Pri_color#')]
MeterStyle=Set.String:S | Set.PickOption_0:S
[ColorMode:1]
Meter=String
Text=Light
FontColor=[&Func:returnBool('ColorMode', '0', '#Set.Text_Color#', '#Set.Pri_color#')]
MeterStyle=Set.String:S | Set.PickOption_1:S

; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R