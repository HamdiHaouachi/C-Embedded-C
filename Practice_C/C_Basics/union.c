#include<stdio.h>

/*
union is defined above all functions so it is global.
The important difference between structures and unions
 is that in structures each member has it's own memory
  whereas members in unions share the same memory. 
  When a variable of type union is declared the compiler
   allocates memory sufficient to hold the largest member 
   of the union. Since all members share the same memory you 
   can only use one member of a union at a time, thus union is
    used to save memory. The syntax of declaring a union is as follows:
*/

union data
{
    int var1;
    double var2;
    char var3;
};

int main()
{
    union data t;

    t.var1 = 10;
    printf("t.var1 = %d\n", t.var1);

    t.var2 = 20.34;
    printf("t.var2 = %f\n", t.var2);

    t.var3 = 'a';
    printf("t.var3 = %c\n", t.var3);

    printf("\nSize of structure: %d", sizeof(t));

    return 0;
}