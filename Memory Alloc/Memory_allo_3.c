// Integres continuous memory allocation
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    a = (int *)calloc(6, sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("Enter the the value %d =  \n", i);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("The value for element %d you entered is : %d \n", i, a[i]);
    }

    return 0;
}