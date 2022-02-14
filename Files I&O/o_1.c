// Taking values from file....

#include<stdio.h>
int main()
{
    FILE *ptr;
    int a;
    ptr = fopen("sample.txt","r");
    
    if (ptr == NULL)
    {
       printf("This Flie Does Not Exist");
    }
    else
    {
    fscanf(ptr,"%d",&a);
    printf("\n %d \n ",a);
    fclose(ptr);
    }
return 0;
}