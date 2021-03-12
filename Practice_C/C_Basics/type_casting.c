/*
	type casting refers to casting or converting one data type into other
	It can be done explicitly(manual by user) and implicitly(automatic by compiler)

	All the data types of the variables are upgraded to the data type of the variable with largest data type.

    
       bool -> char -> short int -> int -> 
       unsigned int -> long -> unsigned -> 
       long long -> float -> double -> long double


*/

#include <stdio.h>




int main(){


	//EXAMPLE of implicit type casting
	int x = 10;    // integer x 
    char y = 'a';  // character c 
  
    // y implicitly converted to int. ASCII  
    // value of 'a' is 97 
    x = x + y; 
     
    // x is implicitly converted to float 
    float z = x + 1.0; 
  
    printf("x = %d, z = %f", x, z); //output - x = 107, z = 108.000000



    //example of explicit type casting	syntax - (type) expression
    double x = 1.2; 
  
    // Explicit conversion from double to int 
    int sum = (int)x + 1; 
  
    printf("sum = %d", sum); 

    


	return 0;
}