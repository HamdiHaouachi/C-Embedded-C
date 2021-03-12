/*
 operators are something which comes in between two operands and performs certain operations
like

Arithmetic Operators
	+  - / * % ++ --

Relational Operators
	==	!=	>	<	>=	<=

Logical Operators
	&&	(logical and)		||	(logical or)		!	(logical not)

Bitwise Operators
	&	|	~	^

Assignment Operators
=	-=	=+	*=	/=	%=	<<=(Left shift AND assignment operator)		>>=		&=		^=		|=


TO READ ABOUT PRECEDENCE OF OPERATORS CLICK ON THE FOLLOWING LINK
https://www.tutorialspoint.com/cprogramming/c_operators_precedence.htm

*/

#include <stdio.h>


int main(){

	/*
		TRY TO PREDICT THE OUTPUT WITHOUT COMPILING FIRST
	*/
	int a = 2;
    int b = 5;
    int c = 10;
    int d = 15;
    int e;

   e = (a + b) * c / d;
   printf("Value of (a + b) * c / d is : %d\n",  e );

   e = a^b&c;
   printf("%d\n",e);

   e = (a||b)&&c;
   printf("%d\n",e);

   e = a&&(b||c);
   printf("%d\n",e);

   e= (a&&b)||c;
   printf("%d\n",e);

   e = (a + b) * (c / d);
   printf("%d\n",e);

   e = a + (b * c) / d;
   printf("%d\n",e);


	return 0;
}
