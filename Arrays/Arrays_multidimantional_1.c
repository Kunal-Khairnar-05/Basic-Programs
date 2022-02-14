#include<stdio.h>
int main()
{
    int abc;
    int xyz;

    printf("enter total number of students ");
    scanf("%d",&abc);
    
    printf("enter total number of subjects ");
    scanf("%d",&xyz);

    int result[abc][xyz];

    for (int i = 0; i < abc; i++)
    {
        for (int j = 0; j < xyz; j++)
        {
            printf("\n\n\n Enter the marks of student no.%d in subject no. %d = ",i+1,j+1);
            scanf("%d",&result[i][j]);
        }
    }

    printf("\n--------------------------------------------------------------\n\n");
    
    for (int i = 0; i < abc; i++)
    {
        for (int j = 0; j < xyz; j++)
        {
            printf("Marks of the student no.= %d in subject no. %d = %d \n",i+1,j+1,result[i][j]);  
        }
    }
    
    
return 0;
}