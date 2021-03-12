#include <stdio.h>

const int N = 3;

void printArr(int arr[][N]) //ROW size must be defined
{
	int i, j;
	for (i = 0; i < N; i++)
	for (j = 0; j < N; j++)
		printf("%d ", arr[i][j]);
}


void print1DArr(int arr[N]){    //size must be defined
    int j;
    for (j = 0; j < N; j++)
		printf("\n%d ", arr[j]);
}
int main()
{
    //2D array
	int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	printArr(arr);

	/*
        when an array is passed to the function only its address of the first index is passed
	*/
	int arr1D[3] = {5,6,7};
	print1DArr(arr1D); //calling 1D array
	return 0;
}
