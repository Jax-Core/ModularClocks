[Option08]
Meter=String
Text=Color Render: Primary color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S
[w321238]
Meter=Shape
MeterStyle=Set.Div:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
[Option09]
Meter=String
Text=Color Render: Secondary color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Primary]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option08:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value08]
Meter=String
Text=#PrimaryOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S

[Secondary]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option09:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value09]
Meter=String
Text=#SecondaryOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S