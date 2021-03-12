#include "Main.H"
#include "Port.H"
#include "Delay_Loop.h"
#include "LED_Flash.h"

void main(void) {
    
    LED_FLASH_Init();

    while(1)
    {
        /* Change the LED state (OFF to ON, or vice versa) */
        LED_FLASH_Change_State();
        /* Delay for *approx* 1000 ms */
        DELAY_LOOP_Wait(1000);
    }
}