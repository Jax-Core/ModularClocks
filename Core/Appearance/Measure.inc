
[Option06]
Meter=String
Text=Rotation (Hori / Vert)
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19w20dsdaw328]
Meter=Shape
MeterStyle=Set.Div:S
[Option07]
Meter=String
Text=Stroke width
MeterStyle=Set.String:S | Set.OptionName:S
[w328]
Meter=Shape
MeterStyle=Set.Div:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
[Option08]
Meter=String
Text=Color Render: Default font color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S
[w321238]
Meter=Shape
MeterStyle=Set.Div:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
[Option09]
Meter=String
Text=Color Render: Overlapped font color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S
[w311541528]
Meter=Shape
MeterStyle=Set.Div:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
[Option10]
Meter=String
Text=Color Render: Background color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S
; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;
[Rotation]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Txt
Y=([Option06:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value06]
Meter=String
Text=#Rotation#
MeterStyle=Set.String:S | Set.Value:S

[Stroke]
Meter=Shape
MeterStyle=Set.TextBox:S
Type=Int|0|5
Y=([Option07:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value07]
Meter=String
Text=#Stroke#
MeterStyle=Set.String:S | Set.Value:S

[FontDefault]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option08:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value08]
Meter=String
Text=#FontDefaultOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S

[FontOver]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option09:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value09]
Meter=String
Text=#FontOverOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S

[Background]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option10:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value10]
Meter=String
Text=#BackgroundOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S