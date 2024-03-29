;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1

[Variables]
CustomAppPosition=5

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

FlatTopShape=

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

CurrentKeyLocks=1Icon
ActiveKeyLocks=1Icon
ActiveKeyLocksNum=1

HLSelectedKeyLockB1=([[#*ActiveKeyLocks*]:X]-((10*#DroptopSize#)-(10*#DroptopSize#)%1)),[[#*ActiveKeyLocks*]:Y],([[#*ActiveKeyLocks*]:W]+((10*#DroptopSize#)-(10*#DroptopSize#)%1)*2),[[#*ActiveKeyLocks*]:H],#DropdownBGCorner# | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedKeyLockB2=([[#*ActiveKeyLocks*]:X]-((10*#DroptopSize#)-(10*#DroptopSize#)%1)+(0.5*#DroptopSize#)),([[#*ActiveKeyLocks*]:Y]+(0.5*#DroptopSize#)),([[#*ActiveKeyLocks*]:W]+((10*#DroptopSize#)-(10*#DroptopSize#)%1)*2-(0.5*#DroptopSize#)*2),([[#*ActiveKeyLocks*]:H]-(0.5*#DroptopSize#)*2),#DropdownBGCorner# | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]

[IconStyle]

[ArrowStyleB]

[BoxStyle]

[TextStyle]

[KeyLocksStyle]
X=((20*#DroptopSize#)-(20*#DroptopSize#)%1)R
Y=r
ImageName="#SKINSPATH#Droptop Community Apps\Apps\KeysLocks-KazukiGames82\Icons\[#KeyLocks___Icon_Style]\Background.png"
MaskImageName="#SKINSPATH#Droptop Community Apps\Apps\KeysLocks-KazukiGames82\Icons\[#KeyLocks___Icon_Style]\[#KeyLocks___Position_[##CURRENTSECTION#]]Mask.png"
MouseOverAction=[!SetVariable CurrentKeyLocks #CURRENTSECTION#][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup HighlightKeyLocks][!UpdateMeterGroup HighlightKeyLocks][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter HighlightKeyLocks][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
; LeftMouseDownAction=[!ShowMeterGroup KeyLocksArrows][!SetOptionGroup KeyLocksArrows Hidden "([#*ActiveKeyLocksNum*]=[##*CURRENTSECTION*#]?1:0)"][!SetVariable ActiveKeyLocksNum [##CURRENTSECTION#]][!SetVariable ActiveKeyLocks #CURRENTSECTION#][!ShowMeter HighlightKeyLocksSelected][!Hide "#CURRENTCONFIG#\Folder"][!HideMeter HighlightSelected][!UpdateMeter HighlightKeyLocksSelected][!UpdateMeasureGroup Calc][!UpdateMeterGroup KeyLocksArrows][!UpdateMeterGroup KeyLocksArrows][!Redraw]
LeftMouseDownAction=[!ShowMeterGroup KeyLocksArrows][!SetVariable ActiveKeyLocksNum [##CURRENTSECTION#]][!SetVariable ActiveKeyLocks #CURRENTSECTION#][!ShowMeter HighlightKeyLocksSelected][!Hide "#CURRENTCONFIG#\Folder"][!HideMeter HighlightSelected][!UpdateMeter HighlightKeyLocksSelected][!UpdateMeasureGroup Calc][!UpdateMeterGroup KeyLocksArrows][!UpdateMeterGroup KeyLocksArrows][!Redraw]
Group=KeyLocks

[KeyLocksArrowStyle]
Y=r
Hidden=1
MouseOverAction=[!SetVariable CurrentKeyLocks #CURRENTSECTION#][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup HighlightKeyLocks][!UpdateMeterGroup HighlightKeyLocks][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!HideMeter HighlightKeyLocks][!SetOption #CURRENTSECTION# ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=KeyLocksArrows

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle

[KeyLocks___Button_1]
Meter=Image
MeterStyle=IconStyle | KeyLocksStyle

[KeyLocks___Button_2]
Meter=Image
MeterStyle=IconStyle | KeyLocksStyle

[KeyLocks___Button_3]
Meter=Image
MeterStyle=IconStyle | KeyLocksStyle

[KeyLocks___Left]
Meter=Image
MeterStyle=IconStyle | KeyLocksArrowStyle

[KeyLocks___Right]
Meter=Image
MeterStyle=IconStyle | KeyLocksArrowStyle

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB
