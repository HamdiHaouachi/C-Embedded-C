/*
	bit fields are used to save memory  .
	we can define the number of bits our code is going to consume
*/


#include <stdio.h>

// A simple representation of date
struct date
{
   unsigned int d;
   unsigned int m;
   unsigned int y;
};

 //lets optimize the space utilization using bit fields

struct date2
{
   // d has value between 1 and 31, so 5 bits
   // are sufficient
   unsigned int d: 5;

   // m has value between 1 and 12, so 4 bits
   // are sufficient
   unsigned int m: 4;

   unsigned int y;
};

int main()
{
   printf("Size of date is %d bytes\n", sizeof(struct date));
   struct date dt = {31, 12, 2014};
   printf("Date is %d/%d/%d", dt.d, dt.m, dt.y);


   printf("\nSize of date2 is %d bytes\n", sizeof(struct date2));
   struct date2 dt2 = {31, 12, 2014};
   printf("Date is %d/%d/%d", dt2.d, dt2.m, dt2.y);

   return 0;
}
