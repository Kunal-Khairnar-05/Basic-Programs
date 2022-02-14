// character presence checking

#include<stdio.h>
int presence(char *a,char b){
    char *ptr = a;
    while (*ptr != '\0')
    {
       if (*ptr == b)
        {
            printf("Yes");
            goto end;
        }
        ptr++;
    }
    
    printf("No");
    
    end:
    return 0;
}


int main()
{
    printf("\n");
    char a[]="america";
    printf("Presence = ");
    presence(a,'z');
    printf("\n");
return 0;
}