[Option02]
Meter=String
Text=Align
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19203s8]
Meter=Shape
MeterStyle=Set.Div:S
[Option04]
Meter=String
Text=Date
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19w20328]
Meter=Shape
MeterStyle=Set.Div:S
[Option05]
Meter=String
Text=Date-Time scaling ratio
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19203s812]
Meter=Shape
MeterStyle=Set.Div:S
[Option06]
Meter=String
Text=Tint color
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19132w20328]
Meter=Shape
MeterStyle=Set.Div:S
[Option07]
Meter=String
Text=Tint icon's color
MeterStyle=Set.String:S | Set.OptionName:S
[Divider1920328]
Meter=Shape
MeterStyle=Set.Div:S
[Option03]
Meter=String
Text=Weather
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                     Input                                    ;
; ---------------------------------------------------------------------------- ;
[Align]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Txt
Y=([Option02:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value02]
Meter=String
Text=#Align#
MeterStyle=Set.String:S | Set.Value:S

[Date]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option04:Y]-#Set.P#+(-20/2+8)*[Set.S])

[TintColor]
Meter=Shape
MeterStyle=Set.Color:S
Y=([Option06:Y]-#Set.P#+(-30/2+8)*[Set.S])

[TintIcon]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option07:Y]-#Set.P#+(-20/2+8)*[Set.S])

[DateTimeRatio]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Num|0.1|2
Y=([Option05:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value05]
Meter=String
Text=#DateTimeRatio#
MeterStyle=Set.String:S | Set.Value:S

[Weather]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option03:Y]-#Set.P#+(-20/2+8)*[Set.S])

; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R