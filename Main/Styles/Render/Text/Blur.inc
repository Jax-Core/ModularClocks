[ImageMeter]
Meter=Image
ImageName=#@#Export\Blur.png
DynamicVariables=1
W=(#Img.W#/(#Img.W#/#SCREENAREAWIDTH#))
H=(#Img.H#/(#Img.H#/#SCREENAREAHEIGHT#))
X=(-#CURRENTCONFIGX#)
Y=(-#CURRENTCONFIGY#)
UpdateDivider=1
COntainer=Hour
[ImageMeter2]
Meter=Image
ImageName=#@#Export\Blur.png
DynamicVariables=1
W=(#Img.W#/(#Img.W#/#SCREENAREAWIDTH#))
H=(#Img.H#/(#Img.H#/#SCREENAREAHEIGHT#))
X=(-#CURRENTCONFIGX#-[Tail:X])
Y=(-#CURRENTCONFIGY#)
UpdateDivider=1
COntainer=Tail


@includeWallpaper=#SKINSPATH##JaxCore\@Resources\Includes\WallpaperCheck.inc


[MM]
Image=File #Cache.Wallpaper# | RenderSize (#Img.W#/4),(#Img.H#/4) | Modulate #BlurModulate# | Blur #BlurRadius#,#BlurSigma#