#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[25];
    int roll;
    char subject[10];
    int marks;
};
void main()
{
    int i,j;
    char str[50];
    struct student s[3];
    FILE *fp;
    fp=fopen("read.txt","r");

    if(fp==NULL)
    printf("FILE NOT EXIST");
    
    fgets(str,50,fp);

    for(i=0;i<3;i++)
    fscanf(fp,"%s%d%s%d",s[i].name,&s[i].roll,s[i].subject,&s[i].marks);
    
    puts(str);
    for(j=0;j<3;j++)
    {
        printf("%s   %d         %s       %d",s[j].name,s[j].roll,s[j].subject,s[j].marks);
        printf("\n");
    }
    fclose(fp);
}