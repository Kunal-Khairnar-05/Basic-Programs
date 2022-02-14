#include<stdio.h>
int occurance(char *a,char b){
    int x=0;
    char *ptr = a;
    while (*ptr != '\0')
    {
       if (*ptr == 'a')
        {
            x++;
        }
        ptr++;
    }
    return x;
}
int main()
{
    printf("\n");
    char a[]={"america"};
    int c = occurance(a,'a');
    printf("Occurance = %d",c);
    printf("\n");
return 0;
}