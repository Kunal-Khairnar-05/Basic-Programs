// Creating encrypted string

#include<stdio.h>
void encrypt(char *a){
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr=(*ptr+1);
        ptr++;
    }
    
}
int main()
{
    char a[50];
    printf("Enter your message = ");
    gets(a);
    encrypt(a);
    printf("Encrypted message = %s",a);
return 0;
}