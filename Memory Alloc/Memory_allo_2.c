// Floats memory allocation

#include<stdio.h>
#include<stdlib.h>
int main()
{
    float *x;
    x = (float *) malloc(5 * sizeof(float));
    for (int i = 1; i < 6; i++)
    {
         printf("Enter the value of float %d : ",i);
         scanf("%f",&x[i]);
    }
     for (int i = 1; i < 6; i++)
    {
         printf("\n The value of float %d is %.3f ",i,x[i]);
    }
    
   
return 0;
}