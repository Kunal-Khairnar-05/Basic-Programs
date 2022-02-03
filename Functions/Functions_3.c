#include <stdio.h>

void addition(int num1, int num2)
{
    printf("Addition of these numbers is %d \n", num1 + num2);
}

void multiplication(int num1, int num2)
{
    printf("multiplication of these numbers is %d \n", num1 * num2);
}

int main()
{
    int a, b;
    printf("Enter numbers ");
    scanf("%d %d", &a, &b);

    addition(a,b);
    multiplication(a,b);
    return 0;
}