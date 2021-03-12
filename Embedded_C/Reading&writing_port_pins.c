#include <reg52.H>

void Write_Bit_P1(const unsigned char, const bit);
bit Read_Bit_P1(const unsigned char);

/* ............................................................... */
void main(void) {
    bit x;
    while(1){
        x = Read_Bit_P1(0);     /* Read Port 1, Pin 0 */
        Write_Bit_P1(1,x);      /* Write to Port 1, Pin 1 */
    }
}

/* --------------------------------------------------------------- */
void Write_Bit_P1(const unsigned char PIN, const bit VALUE){

    unsigned char p = 0x01; /* 00000001 */

    /* Left shift appropriate number of places */
    p <<= PIN;

    /* If we want 1 output at this pin */
    if (VALUE == 1){
        P1 |= p; /* Bitwise OR */
        return;
    }

    /* If we want 0 output at this pin */
    p = ~p; /* Complement */
    P1 &= p; /* Bitwise AND */
}

/* --------------------------------------------------------------- */
bit Read_Bit_P1(const unsigned char PIN){
    
    unsigned char p = 0x01; /* 00000001 */
    
    /* Left shift appropriate number of places */
    p <<= PIN;
    
    /* Write a 1 to the pin (to set up for reading) */
    Write_Bit_P1(PIN, 1);
    
    /* Read the pin (bitwise AND) and return */
    return (P1 & p);
}