#include<stdio.h>
void swap(int*a,int*b);
int main()
{
    int a = 5 ,b= 9;
    printf("value of a is %d and value of b is %d\n after swapping : \n",a,b);
    swap(&a,&b);
    printf("value of a is %d and value of b is %d\n",a,b);
    
return 0;
}
void swap(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}