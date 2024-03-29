[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[KeyLocks___Measure_CapsLock]
Measure=Plugin
Plugin=HotKey
HotKey=CapsLock Status
KeyDownAction=[!UpdateMeasure #CURRENTSECTION#][!SetVariable #CURRENTSECTION# [#CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables #CURRENTSECTION# [#CURRENTSECTION#] "#KeysLocksWriteConfigPath#"][!UpdateMeterGroup KeyLocks-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
OnUpdateAction=[!SetVariable #CURRENTSECTION# [#CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables #CURRENTSECTION# [#CURRENTSECTION#] "#KeysLocksWriteConfigPath#"][!UpdateMeterGroup KeyLocks-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
UpdateDivider=-1

[KeyLocks___Measure_ScrollLock]
Measure=Plugin
Plugin=HotKey
HotKey=ScrollLock Status
KeyDownAction=[!UpdateMeasure #CURRENTSECTION#][!SetVariable #CURRENTSECTION# [#CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables #CURRENTSECTION# [#CURRENTSECTION#] "#KeysLocksWriteConfigPath#"][!UpdateMeterGroup KeyLocks-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
OnUpdateAction=[!SetVariable #CURRENTSECTION# [#CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables #CURRENTSECTION# [#CURRENTSECTION#] "#KeysLocksWriteConfigPath#"][!UpdateMeterGroup KeyLocks-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
UpdateDivider=-1

[KeyLocks___Measure_NumLock]
Measure=Plugin
Plugin=HotKey
HotKey=Numlock Status
KeyDownAction=[!UpdateMeasure #CURRENTSECTION#][!SetVariable #CURRENTSECTION# [#CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables #CURRENTSECTION# [#CURRENTSECTION#] "#KeysLocksWriteConfigPath#"][!UpdateMeterGroup KeyLocks-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
OnUpdateAction=[!SetVariable #CURRENTSECTION# [#CURRENTSECTION#] "Droptop\DropdownBar"][!WriteKeyValue Variables #CURRENTSECTION# [#CURRENTSECTION#] "#KeysLocksWriteConfigPath#"][!UpdateMeterGroup KeyLocks-KazukiGames82 "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!SetOption #CURRENTSECTION# OnUpdateAction ""]
UpdateDivider=-1