// Creating copy string function

#include <stdio.h>
char cpy(char *st1, char *st2)
{
    char *ptr = st2;

    while (*ptr != '\0')
    {
        *st1 = *ptr;

        st1++;
        ptr++;
    }

    return *st1;
} 

int main()
{
    char st1[32];
    char *st2 = "Kunal";
    cpy(st1, st2);
    printf("st2 is cpoied to st1 = %s ", st1);

    // #include<string.h>
    // int main()
    // {
    //     char *a = "kunal";
    //     char b[12];
    //     strcpy(b,a);
    //     printf("Copied value of b to a = %s", b);
    //     return 0;
    //     }
    return 0;
}