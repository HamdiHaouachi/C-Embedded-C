#include "Main.H"
#include "Port.H"
#include "Delay_loop.h"

/*-------------------------------------------------------------*-
DELAY_LOOP_Wait()
Delay duration varies with parameter.
Parameter is, *ROUGHLY*, the delay, in milliseconds,
on 12MHz 8051 (12 osc cycles).
You need to adjust the timing for your application!
-*-------------------------------------------------------------*/

void DELAY_LOOP_Wait(const tWord DELAY_MS){

    tWord x, y;
    for (x = 0; x <= DELAY_MS; x++){
        for (y = 0; y <= 120; y++);
    }
}
