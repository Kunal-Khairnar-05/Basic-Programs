#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*a;
    a = (int*) calloc(10,sizeof(int));
    for (int i = 1; i < 11; i++)
    {
        a[i]=7*i;
        printf("\n The table is 7 * %d = %d \n",i,a[i]);
    }
    printf("\n-----------------------------------------");

    a= realloc(a,15*sizeof(int));

    for (int i = 1; i < 16; i++)
    {
        a[i]=7*i;
        printf("\n The table is 7 * %d = %d \n",i,a[i]);
    }

return 0;
}