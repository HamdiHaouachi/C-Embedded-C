#include <stdio.h>
#include <string.h>

typedef union{
    int units;
    int kgs;
}amount;

typedef struct {
    int unitPrice;
    char name[10];
    //creating a variable of union...same as union inside the structure
    amount how_much;
}quantity;

int main(){
    quantity quan;
    quan.unitPrice = 12;
    strcpy(quan.name, "apples");

    //for accessing the nested union we need dot operator
    quan.how_much.units = 50;
    quan.how_much.kgs = 35;

    printf("\nName : %s\nUnit Price is: %d\nQuantity is: %d\nUnits Purchased: %d\n", quan.name,quan.unitPrice ,quan.how_much.units , quan.how_much.kgs );
    return 0;

}
