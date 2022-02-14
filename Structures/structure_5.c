// accessing structure using pointers 1st method

#include<stdio.h>
#include<string.h>
struct familymember
{
    char name[10];
    int age;
    float weight;
};

int main()
{
    struct familymember f1;
    struct familymember *ptr; 

    ptr =&f1;
    (*ptr).age=52;
    printf("%d",f1.age);
return 0;
}