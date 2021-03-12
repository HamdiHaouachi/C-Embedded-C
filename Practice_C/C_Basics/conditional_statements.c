/* 
if-else and if-else if-else ladder is a conditional statement, 
also switch can be used for executing after certain conditions are met
 */

#include <stdio.h>


int main(){

	/*
		if (condition_is_met)
		{
			evaluate_expression_1
		}
		else 
		{
			evaluate_expression_2
		}
	*/

	/*
		if (condition_is_met)
		{
			evaluate_expression_1
		}
		else if
		{
			evaluate_expression_2
		}
		else
		{
			evaluate_expression_3
		}
	*/

	/*
		switch(variable_to_check){
			case 1:
				expression 1;
				break;
			case 2:
				expression 2;
				break;
			.
			.
			.
			default:
				expression;

		}
		*/


		/*following is the example of if and else..change the value of a and see the response*/
		int a =10;
		if( a < 12 )	//which is true
		{
			printf("if condition is satisfied\n");
		}
		else {
			printf("else condition is satisfied\n");
		}



		/*following is the example of switch case..change the value of x and see the responses*/
		int x = 2; 
	   switch (x) 
	   { 
	       case 1: printf("Choice is 1"); 
	               break; 
	       case 2: printf("Choice is 2"); 
	               break; 
	       case 3: printf("Choice is 3"); 
	               break; 
	       default: printf("Choice other than 1, 2 and 3"); 
	               break;   
	   } 



	   return 0;
}
