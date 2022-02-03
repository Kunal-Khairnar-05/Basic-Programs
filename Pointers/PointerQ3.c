#include<stdio.h>

//changing value using pointers

int abc(int s,int *a){
   *a = (s*10);
   return *a;
}

int main()
{   
    int k=4;
    int *a;
    printf("The value of variable k before change is %d\n",k);
    abc(k,&a);
    printf("The value of variable k after change is %d\n",a);
    return 0;
}