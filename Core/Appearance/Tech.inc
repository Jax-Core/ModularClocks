[Option11]
Meter=String
Text=Show additional time details
MeterStyle=Set.String:S | Set.OptionName:S
[Divider19wdwqeqewqeqweaw328]
Meter=Shape
MeterStyle=Set.Div:S
[Option12]
Meter=String
Text=Use the runic font
MeterStyle=Set.String:S | Set.OptionName:S

; ;================================================================================================================================================================================





[ShowDetails]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option11:Y]-#Set.P#+(-20/2+8)*[Set.S])
[Runic]
Meter=Shape
MeterStyle=Set.Bool:S
Y=([Option12:Y]-#Set.P#+(-20/2+8)*[Set.S])
