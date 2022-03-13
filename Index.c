#include<stdio.h>
#include<math.h>

int add(double b,double c){
    double x = b+c ;
    return printf("%.2lf + %.2lf = %.2lf",b,c,x);}

int sub(double b,double c){
    double x = b-c ;
    return printf("%.2lf - %.2lf = %.2lf",b,c,x);
}
int mul(double b,double c){
    double x = b*c ;
    return printf("%.2lf * %.2lf = %.2lf",b,c,x);
}
int div(double b,double c){
    double x = b/c ;
    return printf("%.2lf / %.2lf = %.2lf",b,c,x);
}
int power(double b,double c){
    double x = pow(b,c);
    return printf("%.2lf power of %.2lf is %.2lf",c,b,x);
}

int main()
{
 char a;
 double b,c;

 printf("Enter the operation you want to perform : + , - , * , / , ^\n");

 scanf("%c",&a);

 printf("\nEnter the first number : ");
 scanf("%lf",&b);

 printf("\nEnter the second number : ");
 scanf("%lf",&c);

    switch (a)
    {
    case '+' : add(b,c);   
    break;

    case '-' :sub(b,c);               
    break;

    case '*' : mul(b,c);               
    break;

    case '/' : div(b,c);               
    break;

    case '^' : power(b,c);               
    break;

    }
return 0;
}