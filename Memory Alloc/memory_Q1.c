#include<stdio.h>
#include<stdlib.h>
int main()
{
    int*a;
    a = (int*) malloc(6 * sizeof(int));
    for (int i = 0; i < 6; i++)
    {
        printf("\n Enter the value of element %d = ",i+1 );
        scanf("%d",&a[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("\n The value of element %d is %d",i+1,a[i]);
    }
    
return 0;
}