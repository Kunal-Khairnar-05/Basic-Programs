#include<stdio.h>
#include<string.h>

struct student 
{
    int a,c;
    float b,d;
    char name[12],place[10];
};

int main()
{
  struct student s1,s2;

  s1.a=400;
  s1.b=300.33;
  strcpy(s1.name,"kunal");

  s2.c=500;
  s2.d=600.66;
  strcpy(s2.place,"KK");

  printf("\n %d \n %.3f \n %s \n\n %d \n %.3f \n %s \n",s1.a,s1.b,s1.name,s2.c,s2.d,s2.place);
return 0;
}