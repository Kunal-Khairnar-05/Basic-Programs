#include<stdio.h>
float force(int m){
    
   float f= m*9.8;
    return f;
}

int main()
{
 int m=45;
 float f= force(m);

 printf("The force acting on body by earth is %f",f);   
return 0;
}