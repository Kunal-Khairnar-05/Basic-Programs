// Getting the data from one file and printing in another file...

#include <stdio.h>
int main()
{
    FILE *ptr1,*ptr2;
    int a;
    ptr1 = fopen("table.txt", "r");
    ptr2 = fopen("table_2.txt", "w");

    a = fgetc(ptr1);
    while (a != EOF)
    {
       fputc(a,ptr2);
       a = fgetc(ptr1);
    }

    fclose(ptr1);
    fclose(ptr2);
    return 0;
}