#include<stdio.h>
int main()
{
  FILE *ptr;
    ptr = fopen("put.txt","r");
    char c = (fgetc(ptr));
    while(1)
    {
        c = (fgetc(ptr));
        printf("%c",c);

        if ( c == EOF)
        {
            break;
        }
        
       
    }
    
return 0;
}