// Getting value from afile and replacing it with modified value
#include <stdio.h>
int main()
{
    FILE *ptr1;
    int a;
    ptr1 = fopen("integers.txt", "r");

    fscanf(ptr1, "%d", &a);

    printf("%d", a);
    ptr1= fopen("integers.txt", "w");
    fprintf(ptr1, "modified value is  %d ", a * 2);

    fclose(ptr1);
    return 0;
}