//printing pointer value by arrow and also by pointer method

#include <stdio.h>
#include <string.h>
struct familymember
{
    int age;
    float weight;
};
int main()
{
    struct familymember f1,f2;
    struct familymember *ptr;
    printf("\n by arrow method : ");
    ptr = &f1;
    ptr->age = 52;
    printf("%d", f1.age);

    printf("\n by pointer method : ");
    fflush(stdout);
    (*ptr).age =55;
    printf("%d", f1.age);

    return 0;
}