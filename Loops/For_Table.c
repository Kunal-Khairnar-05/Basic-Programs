#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the number  \n" );
   
    scanf("%d",&b);
    for(a=1;a<11;a++){
        
        printf("%d * %d = %d \n",b,a,b*a);

    }
return 0;
}