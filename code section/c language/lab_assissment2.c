#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct customer
{
    char ID[50];
    char name[50];
    char add[50];
    char desig[50];
    int salary;
}cus[5];

void inputdata()
{
   FILE *ptr;
   ptr=fopen("customer.txt","w");
   printf("Enter the details of customers :\n\n");
   for(int i=0;i<5;i++)
   {
    printf("Enter customer ID: ");
    gets( cus[i].ID);
    fflush(stdin);
    // printf("\n");
    printf("Enter the name of customer: ");
    gets( cus[i].name);
    fflush(stdin);

    printf("Enter the address of customer: ");
    gets( cus[i].add);
    fflush(stdin);

    printf("Enter the designation of customer: ");
    gets( cus[i].desig);
    fflush(stdin);

    printf("Enter the salary of customer: ");
    scanf("%d", &cus[i].salary);
    fflush(stdin);

    fprintf(ptr,"CID: %s\n NAME: %s\n Address: %s\n Designation: %s\n SALARY: %d\n\n", cus[i].ID,cus[i].name,cus[i].add,cus[i].desig,cus[i].salary);
   
   }

   fclose(ptr);
}

int avg_sal()
{
    FILE *fp;
    fp=fopen("customer.txt","r");
    int sum=0;
    for(int i=0;i<5;i++)
    {
        fscanf(fp,"%s%s%s%s%d",&cus[i].ID,&cus[i].name,&cus[i].add,&cus[i].desig,&cus[i].salary);
        sum+=cus[i].salary;
    }
    printf("Average salary of the customers are: %d\n", sum/5);
    fclose(fp);
}

void search()
{
    char name[50];
    printf("Enter the name of the customer whose details you want to search: ");
    gets(name);
    fflush(stdin);
    FILE *fp;
    fp=fopen("customer.txt","r");
     for(int i=0;i<5;i++)
    {
        fscanf(fp,"%s%s%s%s%d",cus[i].ID,cus[i].name,cus[i].add,cus[i].desig,&cus[i].salary);
        if(strcmp(name,cus[i].name)==1)
        {
            printf("Customer details found\n");
            printf(cus[i].ID,cus[i].name,cus[i].add,cus[i].desig,cus[i].salary);
        }
    }
    fclose(fp);
}
int main()
{
    inputdata();
    avg_sal();
    search();
    return 0;
}