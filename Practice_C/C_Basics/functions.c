/*
there are 4 types of functions in any programming language
i) function not taking any arguments and not returning values
ii)function not taking any arguments and  returning values
iii)function taking arguments and not returning any values
iv)functions taking arguments and returning values

functions can be called by reference or by value..we will cover it in pointers

NOTE: if function body is defined after the main function then their prototype needs to be declared

*/

#include <stdio.h>

//prototype for the functions which are defined after main
void sum3();
int sum4();



int sum1(int a, int b){
	return a+b;
}

void sum2(int a, int b){
	printf("Sum using function 2: %d",a+b);
}





int main(){


	int a = 10 , b= 20;

	/*
        calling function taking arguments and returning valu
		we need to have a variable to store that returned value or it can also be printed directly
	*/
	int s = sum1(a,b);  //first storing
	printf("sum is: %d\n",s);   //then printing
	printf("sum is: %d\n",sum1(10,50));   //printing directly


    /*calling function which takes argument but does not return value*/
    sum2(a,b);

    /*calling function returning value but not taking argument*/
    printf("\nsum4 called: %d",sum4());

    /*calling or invoking function which doesn't take any value and does not return any value*/
    sum3();


	return 0;	//main returning 0
}


void sum3(){
	printf("\n%d\n",100 );
}

int sum4(){
	return 30;
}
