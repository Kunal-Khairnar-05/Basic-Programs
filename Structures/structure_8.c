#include<stdio.h>
#include<string.h>
    // using typedef......

typedef struct familymember
{
    char name[10];
    int age;
    float weight;
} xyz;
  
void show(xyz mem)
{   
    printf("\n The name of member is : %s \n", mem.name);
    printf("The age of member is : %d \n", mem.age);
    printf("The weight of member is : %f \n", mem.weight);
}


int main()
{
    xyz f1;
    xyz *ptr;

    ptr = &f1;
    strcpy(ptr->name,"Kunal");
    ptr->age = 17;
    ptr->weight = 45.5;
    
    show(f1);

    return 0;
}