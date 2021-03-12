/*
There are 3 types of loops in c
i) for loop
ii) while loop
iii) do-while loop
*/

#include <stdio.h>



int main(){

	/* i is initialised with 0 then i is printed and then it is incremented*/
	int i;
	for(i = 0 ; i < 5 ; i++){
		printf("%d\t",i);	//0 1 2 3 4
	}

    /*while loop is entry control loop and will keep executing as long as the condition is satisfied */
	printf("\n");
    int j = 0;
    while(j<5){
      printf("%d\t",j);
      j++;
    }


    /* do-while loop is exit control loop and will exceute at least once */
    printf("\n");
    int k=0;
    do{
       printf("%d\t",k);
       k++;
    }while(k<5);
	return 0;
}
