[m7]
Measure=String
String=
UpdateDivider=-1
[mTime]
Measure=Time
Format=%H
IfCondition=(mTime > 0) && (mTime <= 11)
IfTrueAction=[!SetOption m7 String "Good morning, #Name#"][!UpdateMeasure m7][!Redraw]
IfCondition2=(mTime > 11) && (mTime <= 17)
IfTrueAction2=[!SetOption m7 String "Good afternoon, #Name#"][!UpdateMeasure m7][!Redraw]
IfCondition3=(mTime > 17) && (mTime <= 21)
IfTrueAction3=[!SetOption m7 String "Good evening, #Name#"][!UpdateMeasure m7][!Redraw]
IfCondition4=(mTime > 21) && (mTime <= 24)
IfTrueAction4=[!SetOption m7 String "Good night, #Name#"][!UpdateMeasure m7][!Redraw]