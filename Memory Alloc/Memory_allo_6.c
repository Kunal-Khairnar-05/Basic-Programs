// using free() function to release memory..

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    int n;

    printf("\n How many integers you want to enter = ");
    scanf("%d",&n);

    a = (int *) calloc(n , sizeof (int));
    for (int i = 0; i < n; i++)
    {
        printf("\n Enter the the value %d =  ", i+1);
        scanf("%d", &a[i]);
        
    }
    
       free(a);

    for (int i = 0; i < n; i++)
    {
        printf("\n The value for element %d you entered is : %d \n", (i+1), a[i]);
    }

    return 0;
}