/*
 * Touch_Screen_Definitions.h
 * Here we have all the constants related to items in the LCD Screen
 * Created: 14/11/2014 13:16:59
 *  Author: Jordi Calduch (Dryrain)
 */ 


#ifndef TOUCH_SCREEN_DEFINITIONS_H_
#define TOUCH_SCREEN_DEFINITIONS_H_

//Userbuttons
#define BUTTON_STORE						12
//#define BUTTON_COOLDOWN						83//57
#define BUTTON_AUTOLEVEL					12
#define BUTTON_RESUME						200
#define BUTTON_STOP							20
#define BUTTON_STOP_YES						1
#define BUTTON_SD_SELECTED					15
#define BUTTON_SD_LEFT						14
#define BUTTON_SD_RIGHT						5
#define BUTTON_SPEED_UP						999
#define BUTTON_SPEED_DOWN					999
#define BUTTON_START_PRINTING				100
#define BUTTON_SETUP_BACK					26
#define BUTTON_PAUSE_RESUME					18
#define BUTTON_PREHEAT_PLA					36
#define BUTTON_FAN_DOWN						47

#define BUTTON_BED_DOWN						46
#define BUTTON_BED_UP						48


#define BUTTON_SETUP_BACK_BED				44
#define BUTTON_CHANGE_EXTRUDER				63
#define BUTTON_PROVA						64
#define BUTTON_PROVA_PRESS					65

//Main Menu
#define BUTTON_SLEEP						64
#define BUTTON_CLEAN_CHANGE					148

//Sleep Screen


//Nozzle temps
#define BUTTON_NOZZLE1_PRINT				29
#define BUTTON_NOZZLE2_PRINT				28
#define BUTTON_NOZZLE1_TEMP					58
#define BUTTON_NOZZLE2_TEMP					59
//#define BUTTON_NOZZLE_DOWN				42
//define BUTTON_NOZZLE_UP					41
#define BUTTON_SETUP_BACK_NOZZLE			43

//Insert FILAMENT
#define BUTTON_REMOVE_FIL					50
#define	BUTTON_PURGE_FIL					999//deprecated?
#define BUTTON_INSERT_FIL					2
#define	BUTTON_FILAMENT_NOZZLE1				75
#define	BUTTON_FILAMENT_NOZZLE2				76
#define	BUTTON_INSERT_BACK					20
#define	BUTTON_FILAMENT_BACK				0

#define	BUTTON_INSERT						52
#define	BUTTON_REMOVE						52

//Calibration
//#define BUTTON_CAL_EXTRUDERS_X	67
//#define BUTTON_CAL_EXTRUDERS_Y	118	
#define BUTTON_CAL_FULL						118
//#define BUTTON_CAL_EXTRUDERS_Z	119	
#define BUTTON_Z_CAL_WIZARD					68

//Print Settings Buttons
#define BUTTON_PRINT_SETTINGS				16
#define BUTTON_PRINT_SET_BACK				82
#define BUTTON_PRINT_SET_SPEED_UP			73
#define BUTTON_PRINT_SET_SPEED_DOWN			81
#define BUTTON_PRINT_SET_NOZZ1_UP			23
#define BUTTON_PRINT_SET_NOZZ1_DOWN			78
#define BUTTON_PRINT_SET_NOZZ2_UP			25
#define BUTTON_PRINT_SET_NOZZ2_DOWN			80
#define BUTTON_PRINT_SET_BED_UP				24
#define BUTTON_PRINT_SET_BED_DOWN			79

//Print Settings Buttons_ NEW FORM
#define BUTTON_INCREASE_X3					120 
#define BUTTON_INCREASE						70
#define BUTTON_DECREASE						121
#define BUTTON_DECREASE_X3					122
#define BUTTON_LEFT_EXTRUDER				123
#define BUTTON_BED							124
#define BUTTON_RIGHT_EXTRUDER				125
#define BUTTON_SPPED						126


//Preheat Settings Buttons
#define BUTTON_PREHEAT_SET_BACK				91
#define BUTTON_PREHEAT_SET_NOZZ1_UP			84
#define BUTTON_PREHEAT_SET_NOZZ1_DOWN		87
#define BUTTON_PREHEAT_SET_NOZZ2_UP			86
#define BUTTON_PREHEAT_SET_NOZZ2_DOWN		89
#define BUTTON_PREHEAT_SET_BED_UP			85
#define BUTTON_PREHEAT_SET_BED_DOWN			88


//Button X Line Select
#define BUTTON_X_LINE_SELECT1				21
#define BUTTON_X_LINE_SELECT2				22	
#define BUTTON_X_LINE_SELECT3				51
#define BUTTON_X_LINE_SELECT4				72
#define BUTTON_X_LINE_SELECT5				96
#define BUTTON_X_LINE_SELECT6				97
#define BUTTON_X_LINE_SELECT7				98
#define BUTTON_X_LINE_SELECT8				99
#define BUTTON_X_LINE_SELECT9				100
#define BUTTON_X_LINE_SELECT10				101

//Button Y Line Select
#define BUTTON_Y_LINE_SELECT1				102
#define BUTTON_Y_LINE_SELECT2				103
#define BUTTON_Y_LINE_SELECT3				104
#define BUTTON_Y_LINE_SELECT4				105
#define BUTTON_Y_LINE_SELECT5				106
#define BUTTON_Y_LINE_SELECT6				107
#define BUTTON_Y_LINE_SELECT7				108
#define BUTTON_Y_LINE_SELECT8				109
#define BUTTON_Y_LINE_SELECT9				110
#define BUTTON_Y_LINE_SELECT10				111

//Y CALIB
#define BUTTON_Y_1							137
#define BUTTON_Y_2							138
#define BUTTON_Y_3							139
#define BUTTON_Y_4							140
#define BUTTON_Y_5							141
#define BUTTON_Y_6							142
#define BUTTON_Y_7							143
#define BUTTON_Y_8							144
#define BUTTON_Y_9							145
#define BUTTON_Y_10							146
#define BUTTON_Y_ACCEPT						147
#define BUTTON_Y_REDO						150

//X CALIB
#define BUTTON_X_1							134
#define BUTTON_X_2							119
#define BUTTON_X_3							127
#define BUTTON_X_4							128
#define BUTTON_X_5							129
#define BUTTON_X_6							130
#define BUTTON_X_7							131
#define BUTTON_X_8							132
#define BUTTON_X_9							133
#define BUTTON_X_10							135
#define BUTTON_X_ACCEPT						136
#define BUTTON_X_REDO						149

//BED CALIB
#define BUTTON_BED_CALIB_SW2				93
#define BUTTON_BED_CALIB_SW3				94
#define BUTTON_REDO_BED_CALIB				95
#define BUTTON_BED_CALIB_SUCCESS			69


//Z CALIB
#define BUTTON_Z_CALIB_Z1_Up				112
#define BUTTON_Z_CALIB_Z1_Down				113
#define BUTTON_Z_CALIB_Z1_OK				114

#define BUTTON_Z_CALIB_Z2_Up				116
#define BUTTON_Z_CALIB_Z2_Down				117
#define BUTTON_Z_CALIB_Z2_OK				115


//ADJUST FILAMENT
#define BUTTON_ACCEPT_ADJUST				17
#define BUTTON_ADJUST_ZUp					32
#define BUTTON_ADJUST_ZDown					33


//CLEAN EXTRUDERS
#define BUTTON_CLEAN_DONE					67

//Winbuttons
#define BUTTON_MOVE_AXIS_X					1
#define BUTTON_MOVE_AXIS_Y					2
#define BUTTON_MOVE_AXIS_Z					7
#define BUTTON_MOVE_AXIS_minusX				0
#define BUTTON_MOVE_AXIS_minusY				3
#define BUTTON_MOVE_AXIS_minusZ				8
#define BUTTON_MOVE_AXIS_HOME				4
#define BUTTON_PREHEAT						15
#define BUTTON_MOVE_AXIS_E					5
#define BUTTON_MOVE_AXIS_minusE				6

//PURGE
#define BUTTON_PURGE_TEMP_UP				156
#define BUTTON_PURGE_TEMP_DOWN				157
#define BUTTON_PURGE_LEFT					154
#define BUTTON_PURGE_RIGHT					155
#define BUTTON_PURGE_NEW_FILAMENT			158
#define BUTTON_PURGE_RETRACK				151
#define BUTTON_PURGE_INSERT					152
#define BUTTON_PURGE_INSERTX3				153
#define BUTTON_PURGE						159


//COOLDOWN
#define BUTTON_COOLDOWN_OK					34
#define BUTTON_COOLDOWN_CANCEL				74

#define MENU_PRINT							12
#define MENU_PREHEAT						12
#define MENU_UTILITY						12
#define MENU_FILAMENT						12
#define MENU_INFO							12
#define MENU_SETTINGS						12

//LedDigits
#define LEDDIGITS_FEEDRATE					18
#define LEDDIGITS_NOZZLE					19
#define LEDDIGITS_BED						20
#define LEDDIGITS_FAN						21


//Userimages
#define USERIMAGE_SCREW1					3
#define USERIMAGE_SCREW2					4
#define USERIMAGE_SCREW3					5
#define USERIMAGE_THERMOMETHER				11

//Strings---------------------------------------------
#define STRING_PRINTING_NOZZ1		0
#define STRING_PRINTING_NOZZ2		34
#define STRING_ADVISE_FILAMENT		33
#define STRING_PRINTING_BED			9
#define STRING_PRINTING_PERCENT		37
#define STRINGS_PRINTING_FEED		36
#define STRINGS_PRINTING_GCODE		2

#define STRING_PRINT_SET_NOZZ1		7
#define STRING_PRINT_SET_NOZZ2		38
#define STRING_PRINT_SET_BED		8
#define STRING_PRINT_SET_PERCENT	39

#define STRING_PREHEAT_SET_NOZZ1	43	
#define STRING_PREHEAT_SET_NOZZ2	44
#define STRING_PREHEAT_SET_BED		45

#define STRING_TEMP_NOZZ1			40
#define STRING_TEMP_NOZZ2			42
#define STRING_TEMP_BED				41

#define STRINGS_NOZZLE1				25
#define STRINGS_NOZZLE2				26
#define STRINGS_BED					27
#define STRING_GPURPOSE_WAIT		22
#define STRING_SCREW1				30
#define STRING_SCREW2				31
#define STRING_SCREW3				32
#define STRING_PREHEATING			33
#define STRING_FILAMENT				11
#define STRING_AXEL					50
//#define STRING_BED_SCREW1			13
//#define STRING_BED_SCREW2			46
//#define STRING_BED_SCREW3			47

//PRINTING SETTINGS_NEW FORM
#define STRING_PRINT_SELECTED		32
#define STRING_PRINT_VALUE			31

#define STRING_X_CAB_VALUE			46
#define STRING_Y_CAB_VALUE			48

#define STRING_NAME_FILE			1
#define STRING_CLEAN_INSTRUCTIONS	53

#define STRING_PURGE_LEFT_TEMP		10
#define STRING_PURGE_RIGHT_TEMP		17
#define STRING_PURGE_SELECTED		5



//Form
#define FORM_SDFILES				2
#define FORM_PAUSE					3
#define FORM_STOP					12
#define FORM_PRINTING				9
#define FORM_START_PRINT			10
#define FORM_PRINTING_SETTINGS		10
#define FORM_WAITING_ROOM			11

#define FORM_NOZZLE					16
#define FORM_BED					17
#define FORM_FAN					18
#define FORM_TEMPERATURE			22
#define FORM_MAIN_SCREEN			5
#define FORM_SETUP					13
#define FORM_UTILITIES				4
#define FORM_CAL_WIZARD_WAIT		27
#define FORM_CAL_WIZARD_DONE_GOOD	24
#define FORM_CAL_WIZARD_DONE_BAD	25
#define FORM_INSERT_FIL_PREHEAT		26
#define FORM_SELECT_EXTRUDER		20
#define FORM_INSERT_FIL				19
#define FORM_REMOVE_FIL				19
#define FORM_PURGE_FIL				19
#define FORM_X_CALIB_SELECT			27
#define FORM_Y_CALIB_SELECT			33
#define FORM_PREHEAT_SETTINGS		29
#define FORM_TEMP_MENU				28
#define FORM_CALIB_BED_SCREW1		30
#define FORM_CALIB_BED_SCREW2		31
#define FORM_CALIB_BED_SCREW3		32
#define FORM_CALIB_Z_EXTRUDER1		34
#define FORM_CALIB_Z_EXTRUDER2		35
#define FORM_CALIBRATION			23
#define FORM_FILAMENT				6
#define FORM_ADJUST_FILAMENT		14
#define FORM_SLEEP					37
#define FORM_PRINTING_SETTINGS_NEW	38
#define FORM_CALIB_X				39
#define FORM_CALIB_Y				42
#define FORM_FULL_CAL				40

//INFO SCRENS-----------------------------------------------------------------------
//Forms From INFO SCREENS
#define FORM_INFO_NEEDFIL				18
#define FORM_INFO_INI_XYCALIB			25
#define FORM_INFO_FIL_INSERTED			7
#define FORM_INFO_PLACE_FIL				19
#define FORM_INFO_TURN_SCREWS			16
#define FORM_INFO_BED_MUST_CAL			17
#define FORM_CLEAN_EXTRUDERS			41

#define FORM_PURGE						44

//Success Screen
#define FORM_SUCCESS_FILAMENT			21
#define BUTTON_SUCCESS_FILAMENT_OK		53


//Back Buttons for INFO SCREENS
#define BACKBUTTON_INFO_NEEDFIL			46
#define BACKBUTTON_INFO_INI_XYCALIB		48
#define BACKBUTTON_INFO_FIL_INSERTED	49
#define BACKBUTTON_INFO_PLACE_FIL		54
#define BACKBUTTON_INFO_TURN_SCREWS		42
#define BACKBUTTON_INFO_BED_MUST_CAL	23
#define BACKBUTTON_INSERT				49
#define BACKBUTTON_CALIBRATION			66	
#define BACKBUTTON_PROCESS				161
//#define BACKBUTTON_LETSCALIB			74	
#define BACKBUTTON_WAIT_TEMP_CLEAN		148	
#define BACKBUTTON_PURGE_MENU			160	

//GO! Buttons for INFO SCREEENS
#define BUTTON_INFO_NEEDFIL				45
#define BUTTON_INFO_INI_XYCALIB			47
#define BUTTON_INFO_FIL_INSERTED		10


//#define BUTTON_INFO_PLACE_FIL			52
#define BUTTON_INFO_TURN_SCREWS			41
#define BUTTON_INFO_BED_MUST_CAL		43

#define SOUND_START						0

#endif 