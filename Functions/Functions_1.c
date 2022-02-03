#include <stdio.h>
int main()
{
    int num;
    printf("Enter the the number you want the factorial of\n");
    scanf("%d", &num);
    printf("The factorial of %d is %d",num, factorial(num));

    return 0;
}

int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}
