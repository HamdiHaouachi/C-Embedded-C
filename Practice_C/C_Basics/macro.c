/*Macros are the pre processors, i.e. they gets defined even before
 compiling stage that is at pre processing stage
*/

#include <stdio.h>

//syntax is -		 #define 	macro_name   macro_value

#define PI 3.14		//now PI = 3.14

//functions can also be defined
#define cube(x)	x*x*x




int main(){

	printf("%f\n",PI);
	printf("%d",cube(3));

	return 0;
}
