/*
We already know that a pointer points to a location in memory and thus used to 
store address of variables. So, when we define a pointer to pointer. 
The first pointer is used to store the address of second pointer. 
That is why they are also known as double pointers.

int **ptr;    // declaring double pointers

RUN the following code for knowing more about double pointer

*/


#include <stdio.h>

int main() 
{ 
    int var = 789; 
  
    // pointer for var 
    int *ptr2; 
  
    // double pointer for ptr2 
    int **ptr1; 
  
    // storing address of var in ptr2 
    ptr2 = &var; 
      
    // Storing address of ptr2 in ptr1 
    ptr1 = &ptr2; 
      
    // Displaying value of var using 
    // both single and double pointers 
    printf("Value of var = %d\n", var ); 
    printf("Value of var using single pointer = %d\n", *ptr2 ); 
    printf("Value of var using double pointer = %d\n", **ptr1); 
    
  return 0; 
}  
