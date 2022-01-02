[Option06]
Meter=String
Text=Color Render: color
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[Primary]
Meter=Shape
MeterStyle=Set.ColorPacity:S
Hidden=(1-[&Func:returnBool('Render', 'Color')])
Y=([Option06:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value02]
Meter=String
Text=#PrimaryOpacity#
Hidden=(1-[&Func:returnBool('Render', 'Color')])
MeterStyle=Set.String:S | Set.Pacity:S

; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R