/* Desktop program - illustrating the use of bitwise operators */
#include <stdio.h>

void Display_Byte(const unsigned char);
/* ............................................................... */

int main(){
    unsigned char x = 0xFE;
    unsigned int y = 0x0A0B;

    printf("%-35s","x");
    Display_Byte(x);

    printf("%-35s","1s complement [~x]");
    Display_Byte(~x);
    
    printf("%-35s","Bitwise AND [x & 0x0f]");
    Display_Byte(x & 0x0f);

    printf("%-35s","Bitwise OR [x | 0x0f]");
    Display_Byte(x | 0x0f);

    printf("%-35s","Bitwise XOR [x ^ 0x0f]");
    Display_Byte(x ^ 0x0f);

    printf("%-35s","Left shift, 1 place [x <<= 1] ");
    Display_Byte(x <<= 1);

    x = 0xfe; /* Return x to original value */
    printf("%-35s","Right shift, 4 places [x >>= 4]");
    Display_Byte(x >>= 4);
    printf("\n\n");

    printf("%-35s","Display MS byte of unsigned int y");
    Display_Byte((unsigned char) (y >> 8));
    
    printf("%-35s","Display LS byte of unsigned int y");
    Display_Byte((unsigned char) (y & 0xFF));

return 0;
}


void Display_Byte(const unsigned char CH) {

    unsigned char i, c = CH;
    unsigned char Mask = 1 << 7;
    
    for (i = 1; i <= 8; i++)
    {
        putchar(c & Mask ? '1' : '0');
        c <<= 1;
    }
    
    putchar('\n');
}