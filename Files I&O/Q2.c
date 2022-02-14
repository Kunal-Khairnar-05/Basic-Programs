// Printing table in file..

#include <stdio.h>
int main()
{
    FILE *ptr;
    int a;
    ptr = fopen("table.txt", "w");
    printf("Enter the number to print its table : ");
    scanf("%d", &a);

    for (int i = 1; i < 11; i++)
    {
        fprintf(ptr, "\n %d * %d = %d \n ", a, i, a*i);
    }
    fclose(ptr);
    return 0;
}