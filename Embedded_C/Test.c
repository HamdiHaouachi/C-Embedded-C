// Reading and Writing bits
#include <Reg52.H>

sbit Switch_pin = P1^0;
sbit Led_pin = P1^1;

void main(void){

    bit x;
    /* Set switch pin for reading */
    Switch_pin = 1;
    while(1)
    {
        /* Read Pin 1.0 */
        x = Switch_pin;
        /* Write to pin 1.1 */
        Led_pin = x;
    }
}


/*

void main(void){
    unsigned int Port_data;
    // P1 on Mode Read
    P1 = 0XFF;
    
    while(1){
        //Read the value of P1
        Port_data = P1;

        //Copy the value to P2
        P2 = Port_data;
    }


}

*/