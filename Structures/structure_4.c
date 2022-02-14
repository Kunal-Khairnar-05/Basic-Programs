#include<stdio.h>
struct familymember
{
    char name[10];
    int age;
    float weight;
};
int main()
{
    struct familymember member = {"Kunal",17,45.40};
    printf("\n\n Name is %s \n Age is %d \n Weight is %.3f \n",member.name,member.age,member.weight);
return 0;
}