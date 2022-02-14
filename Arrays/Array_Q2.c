#include <stdio.h>
int main()
{
    int k[10];
    for (int i = 0; i < 10; i++)
    {
        k[i] = 5 * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("5 * %d = %d\n", i + 1, k[i]);
    }
    return 0;
}