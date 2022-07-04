[PageList.Configuration]
Meter=String
MeterStyle=Set.String:S | PageList.Category:S
Text=CONFIGURATION

[Info.Shape]
Meter=Shape
MeterStyle=PageList.Item.Shape:S
[Info.Icon.String]
Meter=String
Text="[\xe88e]"
MeterStyle=Set.String:S | PageList.Item.Icon.String:S
[Info.String]
Meter=String
Text=Info
MeterStyle=Set.String:S | PageList.Item.String:S

[General.Shape]
Meter=Shape
MeterStyle=PageList.Item.Shape:S
[General.Icon.String]
Meter=String
Text="[\xe8b8]"
MeterStyle=Set.String:S | PageList.Item.Icon.String:S
[General.String]
Meter=String
Text=General
MeterStyle=Set.String:S | PageList.Item.String:S
[PageList.looknfeel]
Meter=String
MeterStyle=Set.String:S | PageList.Category:S
Text=LOOK N' FEEL

[Appearance.Shape]
Meter=Shape
MeterStyle=PageList.Item.Shape:S
[Appearance.Icon.String]
Meter=String
Text="[\xe243]"
MeterStyle=Set.String:S | PageList.Item.Icon.String:S
[Appearance.String]
Meter=String
Text=Style options
MeterStyle=Set.String:S | PageList.Item.String:S
[Render.Shape]
Meter=Shape
MeterStyle=PageList.Item.Shape:S
Group=PageList | RenderPageSwitcher
Hidden=1
[Render.Icon.String]
Meter=String
Text="[\xe3a2]"
MeterStyle=Set.String:S | PageList.Item.Icon.String:S
Group=PageList | RenderPageSwitcher
Hidden=1
[Render.String]
Meter=String
Text=Render options
MeterStyle=Set.String:S | PageList.Item.String:S
Group=PageList | RenderPageSwitcher
Hidden=1

[m.CheckHasRender]
Measure=String
String=#Style#
IfMatch=Center|Measure|Text
IfMatchAction=[!ShowMeterGroup RenderPageSwitcher]