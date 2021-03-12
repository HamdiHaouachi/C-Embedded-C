/*
    Pointers points to the memory address and has very wide use in C
*/
#include <stdio.h>

int main(){

/* syntax :- return_type *var_name ; */

//example
int *intPtr;
char *charPtr;
void *voidPtr;

//takign randon values
int a = 30;
char b = 'b';


intPtr = &a; //it is same as intPtr = &a
charPtr = &b;
voidPtr = &a;

printf("int pointer points to :%u\n char pointer points to: %u",intPtr,charPtr);
printf("\nint pointer dereferenced Value :  :%u\n char pointer dereferenced Value: %u",*intPtr,*charPtr);
printf("\nvalue of void pointer after typecasting %u",*(int*)voidPtr);

return 0;
}
