#include <stdio.h>
int main()
{
    int a;
    float b;
    float result;

label:
    printf("\n\n Select the conversion you want....\n\n");

    printf("1.Kilogram to pound \n");
    printf("2.Kms to Miles \n");
    printf("3.Feet to inches \n \n");
    printf("4.To exit \n\n\n");
    scanf("%d", &a);

    switch (a)
    {
    case 1:

        printf("Enter the value in Kilogram = ");
        scanf("%f", &b);
        result = b * 2.205;

        printf("The conversion of value you entered into pounds is %f", result);

        break;

    case 2:

        printf("Enter the value in Kilometres = ");
        scanf("%f", &b);
        result = b / 1.609;

        printf("The conversion of value you entered into miles is %f", result);
        break;

    case 3:

        printf("Enter the value in feet = ");
        scanf("%f", &b);
        result = b * 12;

        printf("The conversion of value you entered into inches is %f", result);
        break;

    case 4:

        printf("Quitting the program....");
        break;

    default:
        printf("The value you entered is invalid \n ");
        goto label;
        break;
    }

    return 0;
}