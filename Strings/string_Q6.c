// Creating decrypted string

#include<stdio.h>
void decrypt(char *a){
    char *ptr = a;
    while (*ptr != '\0')
    {
        *ptr=(*ptr-1);
        ptr++;
    }
    
}
int main()
{
    printf("\n");
    char a[50]={"ifmmp!xfmdpnf!ipnf"};
    decrypt(a);
    printf("Encrypted message = %s",a);
    printf("\n");
return 0;
}