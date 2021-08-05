[Shadow]
Measure=Plugin
Plugin=MagickMeter
DynamicVariables=1
Image=Rectangle 0,0,(#SW#-(#Stroke#)),(#SH#-(#Stroke#)),(#Rounding#*#Scale#),(#Rounding#*#Scale#) | InnerShadow 75,(10*#scale#),0,0,1 ; #MainColor#
UpdateDivider=-1


[ShadowImage]
Meter=Image
X=(#Stroke#)
Y=(#Stroke#)
MeasureName=Shadow
[ImageMeter]
Meter=Image
ImageName=#@#Export\Blur.png
DynamicVariables=1
W=(#Img.W#/(#Img.W#/#SCREENAREAWIDTH#))
H=(#Img.H#/(#Img.H#/#SCREENAREAHEIGHT#))
X=(-#CURRENTCONFIGX#)
Y=(-#CURRENTCONFIGY#)
UpdateDivider=50
COntainer=ActualWave
[Hour]
Meter=
[Hour2]
Meter=
[MaskWave]
Meter=
[Hour3]
Meter=String


@includeWallpaper=#SKINSPATH##JaxCore\@Resources\Includes\WallpaperCheck.inc


[MM]
Image=File #Cache.Wallpaper# | RenderSize (#Img.W#/4),(#Img.H#/4) | Modulate #BlurModulate# | Blur #BlurRadius#,#BlurSigma#