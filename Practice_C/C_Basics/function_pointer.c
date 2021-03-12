#include <stdio.h>
#include <string.h>
 
char* compareStrings(char*, char*, int (*cmp)(const char*, const char*));


int retMax (int n1, int n2)
{
  return (n1 > n2) ? n1 : n2;
}


 
int main ()
{
  int (*ptrMaxFunctin)(int, int);
  ptrMaxFunctin = retMax;
  int qty1 = 20, qty2 = 50;
 
  printf ("Max of %d and %d is : %d \n", qty1, qty2, (*ptrMaxFunctin)(qty1, qty2));



  //function pointer can also be passed as an argument in the another function
  char str1[80], str2[80];
  int (*functPtr)(const char *, const char *); /* function pointer */
  functPtr = strcmp; /* assign address of strcmp to functPtr */
  printf("Enter two strings.\n");
  scanf("%s%s", str1, str2);
 
  /* pass address of strcmp via functPtr */
  printf("Are \"%s\" and \"%s\" equal? : %s\n", str1, str2, compareStrings(str1, str2, functPtr));

  return 0;
}

char* compareStrings(char *a, char *b, int (*cmp) (const char*, const char*))
{
  if(!(*cmp)(a, b)) // !cmp(a, b) is also correct
    return ("YES");
  else
    return("NO");
}