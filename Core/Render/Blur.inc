
[Option11]
Meter=String
Text=Modulate (Brightness, Saturation, Hue)
MeterStyle=Set.String:S | Set.OptionName:S
[Divider132sdasd8]
Meter=Shape
MeterStyle=Set.Div:S

[Option12]
Meter=String
Text=Sigma
MeterStyle=Set.String:S | Set.OptionName:S
[Divider192weewe03s8]
Meter=Shape
MeterStyle=Set.Div:S

[Option13]
Meter=String
Text=Radius
MeterStyle=Set.String:S | Set.OptionName:S
[Divider193sds8]
Meter=Shape
MeterStyle=Set.Div:S

[Option14]
Meter=String
Text=Regenerate Blur
MeterStyle=Set.String:S | Set.OptionName:S

; ---------------------------------------------------------------------------- ;
;                                   Function                                   ;
; ---------------------------------------------------------------------------- ;

[BlurModulate]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option11:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value11]
Meter=String
Text=#BlurModulate#
MeterStyle=Set.String:S | Set.Value:S

[BlurSigma]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option12:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value12]
Meter=String
Text=#BlurSigma#
MeterStyle=Set.String:S | Set.Value:S

[BlurRadius]
Meter=Shape
MeterStyle=Set.TextBox:S
Y=([Option13:Y]-#Set.P#+(-30/2+8)*[Set.S])
[Value13]
Meter=String
Text=#BlurRadius#
MeterStyle=Set.String:S | Set.Value:S

[Button14]
Meter=Shape
MeterStyle=Set.Button:S
Y=([Option14:Y]-#Set.P#+(-30/2+8)*[Set.S])
Overcolor=#Set.Positive_color#,150
leaveColor=#Set.Positive_color#,50
Act=[!WriteKeyValue Variables Cache.Wallpaper "[WallpaperPath]" "#SKINSPATH##Skin.Name#\@Resources\Vars.inc"][!UpdateMeasure MM "#Skin.Name#\Main"][!CommandMeasure MM "Reload Image" "#Skin.Name#\Main"][!Delay 100 "#Skin.Name#\Main"][!CommandMeasure mWH "Dimensions" "#Skin.Name#\Main"]
[Value14]
Meter=String
Text=Start
MeterStyle=Set.String:S | Set.Value:S

[WallpaperPath]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop
RegValue=Wallpaper
UpdateDivider=-1
; ---------------------------------------------------------------------------- ;
;                                    Anchor                                    ;
; ---------------------------------------------------------------------------- ;


[AnchorSuppli]
Meter=String
Container=ContentContainer
x=r
Y=R