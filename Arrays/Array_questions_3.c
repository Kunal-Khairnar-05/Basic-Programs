#include<stdio.h>
int copyArr(int *a){

}
int main()
{
    int k[10],c[10],i,n;
    printf("How many numbers you want to store into an array : ");
    scanf("%d",&n);
    printf("Enter the elements in array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&k[i]);
    }
    
    // Copying the array to second array

    for ( i = 0; i < n ; i++)
    {
        c[i] = k[i];
    }
    
    printf("n\n Original array : ");
    for ( i = 0; i < n; i++)
    {
        printf("\n %d",k[i]);
    }
    printf("\n\n Copied array : ");
    for ( i = 0; i < n; i++)
    {
        printf("\n %d",c[i]);
    }
    
return 0;
}