/* structures are the user defined data types which can accomodate other data types*/
#include <stdio.h>
#include <string.h>


struct ADAS{
	int strength;
	char currentModule[20];
};


void printDetails(struct ADAS obj);
void displayStruct(struct ADAS *objPtr);
struct ADAS returnStruct(struct ADAS o);


/*
    use of typedef lets avoids repitition of struct keywork

    typedef struct{
        int strength;
        char currentModule[20];
    }object;
*/




int main(){

	// create a structure variable to access its' members
	struct ADAS object;
	object.strength = 20;
	strcpy(object.currentModule ,"embedded c");

	//print values
	printf("%d\n%s", object.strength, object.currentModule);

	//create a pointer to the structure
	struct ADAS *ptr ;
	ptr = &object;
	ptr->strength = 40;
	strcpy(ptr->currentModule,"Web Development");
	printf("\n%d\n%s", ptr->strength, ptr->currentModule);


	//create array of structure variable
	struct ADAS arr[2];
	ptr = arr;

	ptr[0].strength = 98;
	strcpy(ptr[0].currentModule , "Martial Arts");

	ptr[1].strength = 200;
	strcpy(ptr[1].currentModule , "Assasination");

	printf("\n%d\n%s", ptr[0].strength, ptr[0].currentModule);
	printf("\n%d\n%s", ptr[1].strength, ptr[1].currentModule);

	/*passing structures variables to functions */
	printDetails(object);

	/*passing a reference to the structures in the functions */
	displayStruct(&object);

	/*function returning whole structure*/
	struct ADAS holdVar = returnStruct(object);
	printf("\n%d\n%s", holdVar.strength, holdVar.currentModule);

	return 0;
}



void printDetails(struct ADAS obj){
     printf("\n%d\n%s", obj.strength, obj.currentModule);
}


void displayStruct(struct ADAS *objPtr){
    objPtr->strength = 1000;
    strcpy(objPtr->currentModule,"Naruto");
    printf("\n%d\n%s", objPtr->strength, objPtr->currentModule);
}

struct ADAS returnStruct(struct ADAS o){
    o.strength = 300;
    strcpy(o.currentModule,"Dance");
    return o;
}

