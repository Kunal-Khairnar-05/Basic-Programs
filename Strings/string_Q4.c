// creating strlen function

#include <stdio.h>
int strlen(char *str){
    char *ptr = str;
    int l = 0;
    while (*ptr != '\0')
    {
        l++;
        ptr++;
    }
    
    return l;
}

int main()
{
    char str[32];
    printf("Enter your name = ");
    gets(str);
    int a = strlen(str);
    printf("Your name has %d letters ", a);
    return 0;
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *st="Hello";
//     int a=strlen(st);
//     printf("\n The lenght of string is %d\n",a);
// return 0;
// }
