#include <stdio.h>
#include <string.h>
int function1(int x,int y);
int function2(int x,int y);
struct student
{
    int roll_no;
    char name[25];
    char department[10];
    char course[25];
    int yoj;
};
int main()
{
    int year,i,j,a,count,roll;char *name;
    struct student s[3];
    for(i=0;i<1;i++)
    {
        printf("ROLL NO. %d:\n",i+1);
        scanf("%d",&s[i].roll_no);
        printf("NAME :\n");
        scanf("%c");
        gets(s[i].name);
        scanf("%c");
        printf("DEPARTMENT :\n");
        gets(s[i].department);
        scanf("%c");
        printf("COURSE :\n");
        gets(s[i].course);
        printf("YEAR OF JOINING :\n");
        scanf("%d",&s[i].yoj);
    }
    printf("which year student's name you want to check :\n");
    scanf("%d",&year);
    for(j=0;j<3;j++)
    {
        a=function1(s[j].yoj,year);
        printf("%d\n",a);
        if(a==1)
        {
           strcpy(name,s[j].name);
           puts(name);
           count++;
        }
    }
    if(count==0)
    printf("No student had taken admission that year\n");
    printf("Enter the roll no. of student whose information you want to access\n");
    scanf("%d",&roll);
    for(j=0;j<1;j++)
    {
        /*int a=0;
        a=function2(s[j].roll_no,roll);
        if(a==1)*/
        printf("ROLL NO :%d",s[j].roll_no);
        printf("NAME :%s",s[j].name);
        printf("DEPARTMENT : %s",s[j].department);
        printf("COURSE : %s",s[j].course);
        printf("YEAR OF JOINING: %d",s[j].roll_no);
    }
    return 0;
}
int function1(int t,int y)
{
	printf("%d %d\n",t,y);
    if(t==y)
    return 1;
    else
    return 0;
}
int function2(int t,int y)
{
    if(t==y)
    return 1;
    else
    return 0;
}
