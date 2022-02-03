#include <stdio.h>
void cube(int a)
{
    printf("%d\n", a * a * a);
}
int main()
{
    int b;
    printf("enter the number you want it's cube \n");
    scanf("%d", &b);
    cube(b);

    return 0;
}