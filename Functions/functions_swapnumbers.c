#include<stdio.h>
void swap(int a,int b)
{
   int temp;
   temp=a;
   a=b;
   b=temp;

   printf("value of a after swapping = %d \n",a);
   printf("value of b after swapping = %d",b);
     
}

int main()
{
     int a,b;
    printf("enter a= \n");
    scanf("%d",&a);

     printf("enter b= \n");
     scanf("%d",&b);
   
    swap(a,b);
return 0;
}