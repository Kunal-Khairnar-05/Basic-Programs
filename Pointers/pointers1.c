#include<stdio.h>
int main()
{
    int a=3;
    int *b= &a;
    printf("value of a %d\n",a);
    printf("value of a %d\n",*b);
    printf("address of a %u\n",&a);
     printf("address of a %u\n",b);
    printf("adrress of b is %u\n",&b);
    printf("value of b is %u\n",*(&b));

return 0;
}