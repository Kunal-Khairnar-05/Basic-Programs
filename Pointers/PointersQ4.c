#include<stdio.h>
// find sum and avg using functions and pointers
void sumAndAvg(int a,int b,int *sum,float *avg){
     *sum = a+b;
     *avg =(float)*(sum)/2;
}

int main()
{
    int x,y,sum;
    float avg;

    x=3;
    y=6;

    sumAndAvg(x,y,&sum,&avg);
    printf("The Sum of two values is %d \n",sum);
    printf("The Avg of two values is %f",avg);

return 0;
}