#include<stdio.h>
#include<string.h>

struct student
{
    int a;
    float b;
    char name[12];
};

int main()
{
  struct student s1;
  s1.a=400;
  s1.b=300.33;
  strcpy(s1.name,"kunal");

  printf("\n %d \n %f \n %s \n",s1.a,s1.b,s1.name);
return 0;
}