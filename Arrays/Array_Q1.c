#include<stdio.h>
int main()
{
    int a[10];
    int *ptr= &a[0];
    ptr = ptr+2;

    if (ptr==&a[2])
    {
        printf("These point to the same location \n");
    }
    else
    {
        printf("These do not point to the same location \n");
    }
    
    
return 0;
}