// Creating bank account structure 

#include<stdio.h>
#include<string.h>
typedef struct account
{
    int num;
    char name[12];
    float balance;
    long long phone;
}acc;

int main()
{
    acc a,b,c;
    printf("\n Enter the account number = ");
    scanf("%d",&a.num);
    
    int x = a.num;

    if (x == 8128)
    {

    printf("\n For an account number : %d \n",a.num);


    strcpy(a.name,"Kunal");
    
    printf("\n Name of account holder = %s \n",a.name);

    a.balance=44000.20;
   
    printf("\n Balance in account = %.2f\n",a.balance);

    a.phone=9212989328;
    
    printf("\n Phone number = %lld \n",a.phone);
    
    }

    else
    {
        printf("❌❌❌ Your account is not registered ❌❌❌");
    }
return 0;
}