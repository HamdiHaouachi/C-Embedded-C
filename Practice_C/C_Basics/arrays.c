/* This code contains all the functions that can be performed on arrays..like insert,delete,searching
	It also contains code for operations on 2D arrays.
	User must first initialize the array and then pass those arrays to the functiosn defined here
	for the operations.
*/

#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE	5

void printArray(int arr[ARRAY_SIZE]);   //function prototype..i.e declaration


int main(){

	//defining 1D array of size 10
	int arr[ARRAY_SIZE] = { 4,2,7,3,8 } ;

	printArray(arr);

    //accessing an individual element
    printf("Element at index 2 is :%d",arr[2]); //prints 7 on index 2

    //modifying a particular element
    arr[2] = 100;
    printArray(arr); // 7 is replaced by 100


	return 0;
}




void printArray(int arr[ARRAY_SIZE]){
	int i=0;
	for( i=0 ; i<ARRAY_SIZE ; i++){

			printf("\n%d\t\n",arr[i] );
		}

}
