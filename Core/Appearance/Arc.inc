[Option06]
Meter=String
Text=Color Render: Arc color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S

[Divider19wdaw328]
Meter=Shape
MeterStyle=Set.Div:S

[Option07]
Meter=String
Text=Color Render: Text color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[PrimaryColor]
Meter=Shape
MeterStyle=Set.Color:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option06:Y]-#Set.P#+(-30/2+8)*[Set.S])

[Secondarycolor]
Meter=Shape
MeterStyle=Set.Color:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option07:Y]-#Set.P#+(-30/2+8)*[Set.S])