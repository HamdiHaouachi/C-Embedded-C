/*
    Pointers points to the memory address and has very wide use in C
*/
#include <stdio.h>

void passingValueToFunction(int *ptr , char *cptr , void *vptr){
    printf("\nValue of a :%u\nValue of b :%u\nValue of c :%u",*ptr,*cptr,*(int*)vptr );

}

int main(){

/* syntax :- return_type *var_name ; */

//example
int *intPtr;
char *charPtr;
void *voidPtr;

//takign randon values
int a = 30;
char b = 'b';
int c = 40;

intPtr = &a; //it is same as intPtr = &a
charPtr = &b;
voidPtr = &c;

    //if we pass pointers in the function arguments then pointers should be there to hold it
    passingValueToFunction(intPtr,charPtr,voidPtr);

return 0;
}
