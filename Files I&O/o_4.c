#include<stdio.h>
int main()
{
    FILE*ptr;
    ptr = fopen("put.txt","r");
//   char c = fgetc(ptr);

  printf("\n The value of char is %c \n ",fgetc(ptr));
  printf("The value of char is %c \n ",fgetc(ptr));
  printf("The value of char is %c \n ",fgetc(ptr));
  printf("The value of char is %c \n ",fgetc(ptr));
  printf("The value of char is %c \n ",fgetc(ptr));
  printf("The value of char is %c \n ",fgetc(ptr));

  fclose(ptr);
return 0;
}