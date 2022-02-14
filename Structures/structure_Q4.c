// Displaying complex and read real number 

#include<stdio.h>

typedef struct complex
{
    int real;
    int complex;
}comp;

void display(comp p){
   
    printf("\n The value of real number is %d \n",p.real);
    printf("\n The value of complex number is %d \n",p.complex);
}
int main()
{
    comp cnums[5];
    for (int i = 0; i < 5; i++)
    {
        printf("\n Enter the real number %d = ",(i+1));
        scanf("%d",&cnums[i].real);

        printf("\n Enter the complex number %d = ",(i+1));
        scanf("%d",&cnums[i].complex);
    }
    printf("------------------------------------------------------------\n");
    printf("------------------------------------------------------------");
    for (int i = 0; i < 5; i++)
    {
       display(cnums[i]);
    }
    
return 0;
}
