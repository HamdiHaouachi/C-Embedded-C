/* This file intends to show the various ways of taking inputs using scanf*/
#include <stdio.h>

int main(){


	//character can be taken using %c
	char charInput;
	scanf("%c",&charInput);

	//string can be taken using %s but
	//LIMITATION - It will read string only untill the whitespace(space) is not detected
	//for example the string is "rahul likes to code";

	char arr[100];
	scanf("%s",arr);	// It will only store rahul as white space is detected

	//if you want to read whole line with white spaces then u can use 
	scanf("%[^\n]%*c", arr);	/*It will stop reading if new line is detected but can read white spaces*/
	/*
	^\n stands for taking input until a newline isn't encountered. 
	Then, with this %*c, it reads the newline character and here,
	 the used * indicates that this newline character is discarded.
	*/



	//	functions like gets..i.e. fgets string and puts..i.e. put string can be used

	char arr2[20];
	int sizeUptoWhichWeNeedToRead = 10;	/*size till which we need to read*/
	fgets(arr2, sizeUptoWhichWeNeedToRead, stdin); //for string input
	puts(arr2);	//for output


	/*other data types can simply be taken input with proper format specifier using scanf*/
	scanf("%d",intInput);
	scanf("%f",floatInput);

	return 0;
}