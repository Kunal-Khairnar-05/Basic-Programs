#include<stdio.h>


double average( int a,int b,int c){
    return (a+b+c)/3.0 ;

} 

int main()
{
    int a,b,c;
    printf("Average of 5,6,6 is %lf" ,average(5,6,6));
    return 0;
}
