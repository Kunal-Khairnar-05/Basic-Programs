#include<stdio.h>
// using Pointer to pointer to print value
int main()
{
    int i=2106099;
    int *k=&i;
    int **kk=*k;

    printf("value of int i is %d",kk);
return 0;
}