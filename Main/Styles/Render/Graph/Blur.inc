[ImageMeter]
Meter=Image
DynamicVariables=1
ImageName=#@#Export\Blur.png
W=(#Img.W#/(#Img.W#/#SCREENAREAWIDTH#))
H=(#Img.H#/(#Img.H#/#SCREENAREAHEIGHT#))
X=(-#CURRENTCONFIGX#)
Y=(-#CURRENTCONFIGY#)
UpdateDivider=50
COntainer=Graph

[Graph]
Fill=Stroke Color 0,0,0
Circle=StrokeWidth 0 | Fill Color 0,0,0




@includeWallpaper=#SKINSPATH##JaxCore\@Resources\Includes\WallpaperCheck.inc


[MM]
Image=File #Cache.Wallpaper# | RenderSize (#Img.W#/4),(#Img.H#/4) | Modulate #BlurModulate# | Blur #BlurRadius#,#BlurSigma#