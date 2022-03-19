#include <stdio.h>
int main()
{
    int i;
    int a[10];
    for (i = 1; i < 11; i++)
    {
        printf("\n element - %d: ", i);
        scanf("%d", &a[i]);
    }

    printf("Elements in reverse order are");

    for (i = 10; i >= 1; i--)
    {
        printf("\n element - %d",a[i]);
    }

    return 0;
}