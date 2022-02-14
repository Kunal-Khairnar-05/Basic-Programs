#include<stdio.h>
struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector m1,m2;
    printf("\n For 1st :\n Enter x dim value = ");
    scanf("%d",&(m1.x));

    printf("Enter y dim value =  ");
    scanf("%d",&(m1.y));

    printf("\n For 2st :\n Enter x dim value = ");
    scanf("%d",&(m2.x));

    printf("Enter y dim value =  ");
    scanf("%d",&(m2.y));

    printf("\n Value of x dim in m1 is %d and in m2 is %d\n Value of y dim in m1 is %d and in m2 is %d",m1.x,m2.x,m1.y,m2.y);

return 0;
}