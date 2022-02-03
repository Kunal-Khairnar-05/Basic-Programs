#include<stdio.h>

//Getting address and value of variables

void abc(int a){
    printf("The address of variable a is %u\n",&a);
}
int main()
{
    int k=4;
    printf("The value of variable k is %d\n",k);
    abc(k);
    printf("The Address of k is %u\n",&k);
    return 0;
}