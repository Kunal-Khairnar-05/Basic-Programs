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
    for (i = 1; i < 11; i++)
    {
        printf("\n element - %d: %d", i, a[i]);
    }
    return 0;
}