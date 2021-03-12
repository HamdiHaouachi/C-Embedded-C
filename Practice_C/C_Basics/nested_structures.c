/*
    A nested structure is a structure within structure
*/

#include<stdio.h>

struct person
{
    char name[20];
    int age;
    char dob[10];
};

struct student
{
    struct person info; //structure variable of class person
    int roll_no;
    float marks;
};

int main()
{
    struct student s1;

    printf("Details of student: \n\n");

    printf("Enter name: ");
    scanf("%s", s1.info.name);  /*for accessing the member dot operator is used twice on the structure varibles*/

    printf("Enter age: ");
    scanf("%d", &s1.info.age);

    printf("Enter dob: ");
    scanf("%s", s1.info.dob);

    printf("Enter roll no: ");
    scanf("%d", &s1.roll_no);

    printf("Enter marks: ");
    scanf("%f", &s1.marks);

    printf("\n*******************************\n\n");

    printf("Name: %s\n", s1.info.name);
    printf("Age: %d\n", s1.info.age);
    printf("DOB: %s\n", s1.info.dob);
    printf("Roll no: %d\n", s1.roll_no);
    printf("Marks: %.2f\n", s1.marks);

    
    return 0;
}
