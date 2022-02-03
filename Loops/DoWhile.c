#include<stdio.h>
int main()
{

    // making the list of even numbers from 1st input to 2nd input 
     int a,b;
         printf("Enter the value of a : \n");
         scanf("%d",&a);

         printf("Enter the value of b : \n");
         scanf("%d",&b);
     do
    {
       
        if(a%2==0){

            
            printf("%d \n",a);
        }

         a++;
        
    }
      while (a<=b);
     
return 0;
}