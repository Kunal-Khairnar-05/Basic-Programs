#include<stdio.h>
#include <string.h>
int main()
{
   char *st = "KK";
   char st2[13]={"ll "};
   strcat(st2,st);
   printf("value of st2 is %s ",st2);
    return 0;
}