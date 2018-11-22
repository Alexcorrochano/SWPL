<!-- WELCOME TO THE RADIO MANUAL CONFIGURATOR , PLEASE FOLLOW THE NEXT STEPS TO GENERATE YOUR MANUAL SUCCESSFULLY -->


<!-- THIS ARE THE FOLLOWING FEATURES THAT CAN BE ADDED TO YOUR MANUAL 
	-Manual tuning (__MANUALTUNING): Includes the fast search feature (FS_Manual), that consists in accelerating the frequency scanner when the user holds the button
									 If you dont want to include the fast search feature, please define __MANUALTUN
	-Automatic tuning (__AUTOTUNING): Includes the fast search feature (FS_auto), that consists in searching automatically the next station if the user holds the button
									 If you dont want to include the fast search feature, please define __AUTOTUN
	-Seek tuning (__SEEKTUN): Shows a brief key where is explained the different arrows and their function. Arrows can be generated individually 
	-Display (__DISPLAY): Standard display can be added 
	-Keypad (__KEYPAD): Standard keypad can be added to complement the manual tuning
	-Up arrow (__UPARROW): Single up arrow
	-Down arrow (__DOWNARROW): Single down arrow 
	-Left arrow (__LEFTARROW): Left double arrow 
	-Right arrow (__RIGHTARROW): Right double arrow 

	LANGUAGES: Console will only ask for language if the Dieburg manual is generated. The translation of any manual is something that is being worked on
-->

<!-- Now is up to you! Generate a manual based on your requirements -->

#ifdef NAME_LOCATION
	#define __LOCATION NAME_LOCATION
	#define __
	#define __
	#define __
	#define __
#endif 


<!-- FEATURES -->

#include "features/features.cpp"

<!-- Once your manual is built up, go to your windows console and generate the next command: "createConfigManual.bat NAME_LOCATION name_location.html" (No quotes) -->