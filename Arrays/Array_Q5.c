#include <stdio.h>

// unsloved :( :(

int main()
{
    int a[12] = {1, 2, 3,  4, -1, -2, 3, 4, 5, 6,'\0'};
    int i=0;
    printf("\n");
        do
        {
             i++;
        }
        while (a[i] > 0);

    printf("There are %d positive numbers \n",i);

    return 0;
}