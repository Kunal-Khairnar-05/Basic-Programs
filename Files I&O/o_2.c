// Putting values in file....

#include <stdio.h>
int main()
{
    FILE *ptr;
    int a = 19;
    ptr = fopen("sample.txt", "w");
    fprintf(ptr, "\n %d \n ", a);
    fclose(ptr);
    return 0;
}