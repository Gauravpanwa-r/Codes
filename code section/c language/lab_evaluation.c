#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct data
{
    char cid[4];
    char name[10];
    char address[10];
    char designation[20];
    int salary;
};
int main()
{   
    int i;
    struct data emp[]={"c101,RitikR,Nagpur,S/WEngineer,50000","c102, Karan J,Pune,Developer,60000","c103,Heera H,Mumbai,ProductManager,10000","c104,Dilip K,Mumbai,CEO,25000","c105,Ankesh,Pune,LabIncharge,40000"};
    FILE *fp;
    fp=fopen("write1.txt","w");
    if(fp==NULL)
    printf("File doesn't exist\n");
    for(int j=0;j<5;j++)
    {
        fprintf(fp,"%s %s %s %s %d",emp[j].cid,emp[j].name,emp[j].address,emp[j].designation,emp[j].salary);
        printf("\n");
    }
    fclose(fp);
    
   return 0;
}