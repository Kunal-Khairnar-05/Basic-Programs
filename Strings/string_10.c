#include<stdio.h>
#include <string.h>
int main()
{
   char *st = "Kunal";
   char st2[13]={"Kumar"};

//    subtracting ASCII value of 1st from 2nd 

   int val = strcmp(st,st2);
   printf("value of st2 is %d ",val);
    return 0;
}