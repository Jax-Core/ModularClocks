[Option06]
Meter=String
Text=Show dot
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19wdaw328]
Meter=Shape
MeterStyle=Set.Div:S
[Option07]
Meter=String
Text=Line width
MeterStyle=Set.String:S | Set.OptionName:S
[w328]
Meter=Shape
MeterStyle=Set.Div:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
[Option08]
Meter=String
Text=Color Render: Font color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S
[w321238]
Meter=Shape
MeterStyle=Set.Div:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
[Option09]
Meter=String
Text=Color Render: Line color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;
[Circle]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option06:Y]-#Set.P#+(-20/2+8)*[Set.S])
[LineWidth]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Int|0|20
Y=([Option07:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value07]
Meter=String
Text=#LineWidth#
MeterStyle=Set.String:S | Set.Value:S

[Font]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option08:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value08]
Meter=String
Text=#FontOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S

[Line]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option09:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value09]
Meter=String
Text=#LineOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S