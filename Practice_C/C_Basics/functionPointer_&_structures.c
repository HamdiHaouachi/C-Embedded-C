/*
    In this file function pointer has been used inside the structure and can be used if want to have functions in structure
*/
#include<stdio.h>
#include <stdlib.h>

#define DIAMETER 5  //DIAMETER OF THE WHEEL


typedef   int (*CalculateSpeed)(int a ); //prototype
int calculateSpeed(int rpm);    //prototype of calculate speed

typedef struct{
    int rpm;
    int torque;
    int voltage;

    CalculateSpeed cs;


}motor;


void fillInput(motor *m,int r,int t, int v){
    m->rpm = r;
    m->torque = t;
    m->voltage = v;
}

void printMotorParameters(motor *m){
    /*
        IMPORTANT : initialize the function only where you want to call it in case of structure
        I have made it to point to the function called calculate speed in this function when I want to use it
    */
     m->cs = calculateSpeed;
     int rpm = m->rpm;
     int speed = m->cs(rpm);
     printf("RPM is : %d\tTorque is: %d\t Volatge Required: %d\n%d",m->rpm,m->torque,m->voltage,speed);
}


int main(){

    motor m;
    fillInput(&m,10,65,78);
    printMotorParameters(&m);


    return 0;
}


int calculateSpeed(int rpm){
    return rpm*DIAMETER;
}
