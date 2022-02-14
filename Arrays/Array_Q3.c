#include <stdio.h>
int main()
{
    int k[10];
    int n;
    printf("Enter the number to print it's table = ");
    scanf("%d",&n);
    for (int i = 0; i < 10; i++)
    {
        k[i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d = %d\n",n, i + 1, k[i]);
    }
    return 0;
}