#include <stdio.h>
int sum(int a[])
{
    int p = 0;
  
    for (int i = 0; i < 5; ++i)
    {
         p += a[i];
    }
    return p;
}

int main()
{
    int z[5];
    printf("Enter the elements in an array : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &z[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n %d",z[i]);
    }

    printf("\n Sum of numbers in your array is %d", sum(z));
    return 0;
}