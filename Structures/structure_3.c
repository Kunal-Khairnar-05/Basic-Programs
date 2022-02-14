#include<stdio.h>
#include<string.h>
struct familymember
{
    char name[10];
    int age;
    float weight;
};

int main()
{
 struct familymember member[4];
 {
     printf("\n\nFirst member : ");
     strcpy(member[0].name,"Dhanaji");
     member[0].age=51;
     member[0].weight=78.40;
     printf("%s \n %d \n %f \n\n",member[0].name,member[0].age,member[0].weight);

     printf("Second member : ");
     strcpy(member[1].name,"Surekha");
     member[1].age=41;
     member[1].weight=67.30;
     printf("%s \n %d \n %f \n\n",member[1].name,member[1].age,member[1].weight);

     printf("Third member : ");
     strcpy(member[2].name,"Bhakti");
     member[2].age=23;
     member[2].weight=42.60;
     printf("%s \n %d \n %f \n\n",member[2].name,member[2].age,member[2].weight);

     printf("Fourth member : ");
     strcpy(member[3].name,"Kunal");
     member[3].age=17;
     member[3].weight=45.40;
     printf("%s \n %d \n %f \n\n",member[3].name,member[3].age,member[3].weight);
 };
    
return 0;
}