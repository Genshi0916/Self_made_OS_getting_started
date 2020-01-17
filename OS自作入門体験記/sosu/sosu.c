#include <stdio.h>
#include "apilib.h"

#define MAX  101

void HariMain(void)
{
 char flag[MAX], s[8];
 int i, j;
 for (i = 1; i < MAX; i++)
 {
   if(i % 3 == 0 && i % 5 == 0)
   {
    sprintf(s, "FizzBuzz\t",i);
   }

   else if(i % 3 == 0)
   {
    sprintf(s, "Fizz\t",i);
   }

   else if(i % 5 == 0)
   {
    sprintf(s, "Buzz\t",i);
   }
   else
   {
    sprintf(s, "%d\t", i);
   }
   api_putstr0(s);

 }
 api_end();
}