#include <stdio.h>
float c2f(float c)
{
    float f = (c * 9 / 5.0) + 32;
    return f;
}

int main()
{
    float c = 5;
    float f = c2f(c);
    printf("The value of %f degree celsius in fahrenheit is %f", c, f);

    return 0;
}
