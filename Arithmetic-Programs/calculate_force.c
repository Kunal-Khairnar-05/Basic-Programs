#include <stdio.h>
void force(float a)
{
    printf("Force acting on the body is = %f N", a * 9.8);
}
int main()
{
    float a;
    printf("Enter the mass of the body(in kg) = ");
    scanf("%f", &a);
    force(a);
    return 0;
}