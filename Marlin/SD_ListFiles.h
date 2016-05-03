// SD_ListFiles.h

#ifndef _SD_LISTFILES_h
#define _SD_LISTFILES_h


	#include "arduino.h"
	
	#include "genieArduino.h"
	#include "Touch_Screen_Definitions.h"
	#include "Marlin.h"
	#include "Configuration.h"
	#include "stepper.h"
	#include "temperature.h"
	#include "cardreader.h"
	
	
	
	
class Listfiles
{
	public:
	Listfiles();
	void get_lineduration(void);
	int get_hours(void);
	int get_minutes(void);
	int get_filmetros1(void);
	int get_filmetros2(void);
	public:
	char comandline[50];
	char comandline2[25];
	
	private:
	int dias, horas, minutos;
	int filmetros1, filmetros2;
	void extract_data(void);
	void extract_data1(void);
};
	
extern Listfiles listsd;	
	
	
	



#endif

