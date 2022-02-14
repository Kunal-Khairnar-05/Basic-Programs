// slice the string 

#include<stdio.h>
void slice(char *a,int m ,int n){
    int i=0;
    
    while ((m+i-1)<n)
    {
       a[i] = a [i + m];
       i++;
    }
    a[i]='\0';
}

int main()
{
    char *a;
    printf("Enter any name = ");
    gets(a);
    printf("slice from 2nd to 4th character of your string is = ");
    slice(a,1,3);

    printf("%s",a);
return 0;
}