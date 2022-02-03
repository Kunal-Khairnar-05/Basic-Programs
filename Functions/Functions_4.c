#include <stdio.h>
void table(int b)
{
    printf("Square of your number is %d \n\n",b*b);
    printf("Table of your number is \n");
    int i, c;
    for (i = 1; i < 11; i++)
    {
        c = b * i;
        printf("%d \n", c);
    }

    
}

int main()

{
    int a;
    printf("enter a number");
    scanf("%d", &a);
    table(a);
    return 0;
}