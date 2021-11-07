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
Text=Tint icon color?
MeterStyle=Set.String:S | Set.OptionName:S
[Divider1920328]
Meter=Shape
MeterStyle=Set.Div:S
[Option03]
Meter=String
Text=Weather
MeterStyle=Set.String:S | Set.OptionName:S
[19283019278301]
Meter=Shape
Hidden=(1-#Weather#)
MeterStyle=Set.Div:S
[Option11]
Meter=String
Text=Weather location
Hidden=(1-#Weather#)
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19w2s0328]
Meter=Shape
Hidden=(1-#Weather#)
MeterStyle=Set.Div:S
[Option12]
Meter=String
Text=Unit (Metric/Imperial)
Hidden=(1-#Weather#)
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

[Weather]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option03:Y]-#Set.P#+(-20/2+8)*[Set.S])

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

[WeatherLocation]
Meter=Shape
MeterStyle=Set.Textbox:S
Y=([Option11:Y]-#Set.P#+(-30/2+8)*[Set.S])
Hidden=(1-#Weather#)
Type=Txt
[Value11]
Meter=String
Text=#WeatherLocation#
Hidden=(1-#Weather#)
MeterStyle=Set.String:S | Set.Value:S

[WeatherUnits]
Meter=Shape
MeterStyle=Set.Textbox:S
Type=Txt
Hidden=(1-#Weather#)
Y=([Option12:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value12]
Meter=String
Text=#WeatherUnits#
Hidden=(1-#Weather#)
MeterStyle=Set.String:S | Set.Value:S