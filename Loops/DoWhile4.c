#include<stdio.h>
int main()
{
    // odd numbers from 0 to 100
    int a=0;
    do{
        if(a%2==1){
            printf("%d \n ",a);
            
        }
        a++;
    }
    while(a<101);
return 0;
} 