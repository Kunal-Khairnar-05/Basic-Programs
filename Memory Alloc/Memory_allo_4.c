// user decided integres memory allocation 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a;
    int n;

    printf("How many integers you want to enter = ");
    scanf("%d",&n);

    a = (int *) malloc(n * sizeof (int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the the value %d =  \n", i+1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("The value for element %d you entered is : %d \n", (i+1), a[i]);
    }

    return 0;
}