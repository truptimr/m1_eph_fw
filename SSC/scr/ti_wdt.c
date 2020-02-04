/*
 Functions for managing the TI TPS3813XX watchdog chip
 */
#include <stdint.h>
#include "bsp.h"
#include "gpio_fast.h"

#define WIN (500000 * M1SA_US_TO_CORETIMER_TICKS) 
#define PW (20000 * M1SA_US_TO_CORETIMER_TICKS) 

static int last_petting_time;

void pet_the_dog()
{
    /* 
     * We have programmed the watchdog chip to work at a fixed window.  
     * We wait 2.5 seconds, then strobe the pin for 20 milliseconds.
     */
  
  int now = ReadCoreTimer();  

  if((now - last_petting_time) > WIN )
  {
    // time to pet the dog
    WDT_On();
    last_petting_time = now;
  }
  else
    {
      if ( now > (last_petting_time + PW) )
	{
	  // time to release the beast
	  WDT_Off();
	}
    }
}