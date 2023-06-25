#include <stdio.h>
int function1(int x,int y);
int function2(int x,int y);
struct student
{
    int roll_no;
    char name[25];
    char department[10];
    char course[25];
    int yoj;
}s[10];
int main()
{
    int year,roll;
    for(int i=0;i<10;i++)
    {
        printf("ROLL NO. %d:\n",i+1);
        scanf("%d",&s[i].roll_no);
        printf("NAME %d:\n",i+1);
        gets(s[i].name);
        scanf("%c");
        printf("DEPARTMENT %d:\n",i+1);
        gets(s[i].department);
        //scanf("%c");
        printf("COURSE %d:\n",i+1);
        gets(s[i].course);
        //scanf("%c");
        printf("YEAR OF JOINING %d:\n",i+1);
        scanf("%d",&s[i].yoj);
    }
    printf("which year student's name you want to check :\n");
    scanf("%d",&year);
    for(int j=0;j<10;j++)
    {
        int a=0;
        a=function1(s[j].yoj,year);
        if(a==1)
        printf("%s",s[j].name);
    }
    printf("Enter the roll no. of student whose information you want to access\n");
    scanf("%d",&roll);
    for(int j=0;j<10;j++)
    {
        int a=0;
        a=function2(s[j].roll_no,roll);
        if(a==1)
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