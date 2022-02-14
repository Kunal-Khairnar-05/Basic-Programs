#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("Salary_sheet.txt", "w");
    char a[12];
    int b;
    printf("\n Enter the name = ");
    scanf("%s", a);

    printf("\n Enter the salary = ");
    scanf("%d", &b);

    fprintf(ptr, "The name is %s \n", a);
    fprintf(ptr, "The salary is %d", b);
    
    return 0;
}