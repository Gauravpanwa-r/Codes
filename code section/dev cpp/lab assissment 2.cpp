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
}emp[5];
int main()
{   
    int i=0;
    for(i=0;i<5;i++)
    {
        printf("ENTER DETAILS OF EMPLOYEE %d\n",i+1);
        printf("CID :");
        scanf("%s",emp[i].cid);
        printf("NAME :");
//        scanf("%c");
        scanf("%s",emp[i].name);
        printf("ADDRESS :");
        scanf("%s",emp[i].address);
        printf("DESIGNATION :");
        scanf("%s",emp[i].designation);
        printf("SALARY :");
        scanf("%d",emp[i].salary);
//        scanf("%c");
    }
    printf("lkjhg");
    /*FILE *fp;
    fp=fopen("write1.txt","w");
    if(fp==NULL)
    printf("File doesn't exist\n");
    fclose(fp);
    */
   return 0;
}
