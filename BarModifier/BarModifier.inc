;----------------------------------------------------
; Styles
;----------------------------------------------------

[KeysLocks-KazukiGames82.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)%1))*3)

[KeyLocks___Style]
ImageName="#SKINSPATH#Droptop Community Apps\Apps\KeysLocks-KazukiGames82\Button\Medium\[#KeyLocks___Icon_Style]\Background[#KeyLocks___Measure_[#KeyLocks___Position_[##CURRENTSECTION#]]][#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
MaskImageName="#SKINSPATH#Droptop Community Apps\Apps\KeysLocks-KazukiGames82\Button\Medium\[#KeyLocks___Icon_Style]\[#KeyLocks___Position_[##CURRENTSECTION#]]Mask[#KeyLocks___Measure_[#KeyLocks___Position_[##CURRENTSECTION#]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#/([#KeyLocks___Measure_[#KeyLocks___Position_[##CURRENTSECTION#]]]=0?3:1))
X=R
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)%1))
H=(#TopHeight#+#TopBarIconHOffset#)
Padding=#SysIconPadding#
MouseOverAction=[!SetOptionGroup KeyLocks-KazukiGames82 ImageTint "#*TopBarFontColor2*#,#*HighlightFontOpacity1*#"][!SetOption #CURRENTSECTION# ImageAlpha "#*HighlightFontOpacity1*#"][!UpdateMeterGroup KeyLocks-KazukiGames82][!Redraw]
MouseLeaveAction=[!SetOptionGroup KeyLocks-KazukiGames82 ImageTint "#TopBarFontColor1#,#TopBarTitleOpacity#"][!SetOption #CURRENTSECTION# ImageAlpha "(#*TopBarTitleOpacity*#/([#KeyLocks___Measure_[#KeyLocks___Position_[##*CURRENTSECTION*#]]]=0?3:1))"][!UpdateMeterGroup KeyLocks-KazukiGames82][!Redraw]
LeftMouseDownAction=["#@#Scripts\DroptopAHK.#AHKType#" "Toggle[#KeyLocks___Position_[##CURRENTSECTION#]]"]
Container=SystemTrayContainer
DynamicVariables=1
Group=CustomApp[#KeysLocks-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#KeyLocks-KazukiGames82]] | CustomAppButton | KeyLocks-KazukiGames82

;----------------------------------------------------
; Meters
;----------------------------------------------------

[KeyLocks___Button_1]
Meter=Image
MeterStyle=InfoStyle | KeyLocks___Style
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#KeysLocks-KazukiGames82]]]

[KeyLocks___Button_2]
Meter=Image
MeterStyle=InfoStyle | KeyLocks___Style

[KeyLocks___Button_3]
Meter=Image
MeterStyle=InfoStyle | KeyLocks___Style
