#include <stdio.h>
int main()
{
    int n = 100, b, sum = 0;
    for (b = 1; b <= n; ++b)
    {
        sum += b;
    }

    printf("%d \n", sum);
    return 0;
}