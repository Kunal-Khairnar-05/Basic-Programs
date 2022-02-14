// Writing characters in file

#include<stdio.h>
int main()
{
    FILE*ptr;
    ptr = fopen("put.txt","w");
    putc('c',ptr);
    putc('d',ptr);
    putc('e',ptr);
    putc('f',ptr);
    putc('g',ptr);
    putc('h',ptr);

    fclose(ptr);
return 0;
}