<!--Here we can find the different components that can be added to the manuals in ENGLISH-->

#ifdef __LOCATION
	#include "Location.txt"
#endif 

#ifdef __DISPLAY 
	#include "display.txt"
#endif 


#ifdef __AUTOTUNING
	#define __AUTOTUN
		#include "autotuning.txt"
	#define __FSAUTO
		#include "FS_auto.txt"
#endif 


#ifdef __SEEKTUN
	#include "seektuning.txt"
#endif 


#ifdef __MANUALTUNING
	#define __MANUALTUN
		#include "manualtuning.txt"
	#define __FSMANUAL
		#include "FS_manual.txt"
#endif 


#ifdef __KEYPAD
	#include "keypad.txt"
#endif 

<!-- Arrows -->


#ifdef __UPARROW
	#include "Single_UP_arrow.txt"
#endif

#ifdef __DOWNARROW
	#include "Single_DOWN_arrow.txt"
#endif

#ifdef __LEFTARROW
	#include "Double_LEFT_arrow.txt"
#endif

#ifdef __RIGHTARROW
	#include "Double_RIGHT_arrow.txts"
#endif


<!--Here we can find the different components that can be added to the manuals in SPANISH-->

#ifdef __SPA_TITLE
	#include "spa_title.txt"
#endif 

#ifdef __SPA_AUTOTUN
	#include  "spa_autotun.txt"
#endif 

#ifdef __SPA_MANUALTUN
	#include "spa_manualtun.txt"
#endif 