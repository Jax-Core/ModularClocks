
;================================================================================================================================================================================

[Time]
Meter=String
Text=Time
MeterStyle=Set.String:S | Set.OptionCat:S

[Option01]
Meter=String
Text=Time format: 24(H) 12(I)
MeterStyle=Set.String:S | Set.OptionName:S


;================================================================================================================================================================================




;================================================================================================================================================================================


[2412:]
Meter=Shape
Shape2=Rectangle ([&Func:returnBool('2412', 'H')] = 0 ? 0 : (150*[Set.S])),0,(150*[Set.S]),(30*[Set.S]),(7*[Set.S]) | Fill Color #Set.Text_Color# | StrokeWidth 0 |
0Act=[!WriteKeyValue Variables 2412 "I" "#Sec.SaveLocation#"]
1Act=[!WriteKeyValue Variables 2412 "H" "#Sec.SaveLocation#"]
MeterStyle=Set.Pick:S
Y=([Option01:Y]-#Set.P#+(-30/2+8)*[Set.S])
[2412:0]
Meter=String
Text=12-Hour
FontColor=([&Func:returnBool('2412', 'H')] = 0 ? 0 : 255),([&Func:returnBool('2412', 'H')] = 0 ? 0 : 255),([&Func:returnBool('2412', 'H')] = 0 ? 0 : 255)
LeftMouseUpAction=[&Func:GroupVar('#CURRENTSECTION#', '0Act')][!Refresh][!UpdateMeasure Auto_Refresh:M]
MeterStyle=Set.String:S | Set.PickOption_0:S
[2412:1]
Meter=String
Text=24-hour
FontColor=([&Func:returnBool('2412', 'H')] = 1 ? 0 : 255),([&Func:returnBool('2412', 'H')] = 1 ? 0 : 255),([&Func:returnBool('2412', 'H')] = 1 ? 0 : 255)
LeftMouseUpAction=[&Func:GroupVar('#CURRENTSECTION#', '1Act')][!Refresh][!UpdateMeasure Auto_Refresh:M]
MeterStyle=Set.String:S | Set.PickOption_1:S