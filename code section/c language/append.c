#include <stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("read.txt","a");
    if(fp==NULL)
    printf("FILE NOT EXIST");
    char str[25],str2[10];
    int roll,marks;
    printf("Enter the name\n");
    gets(str);
    printf("Enter subject\n");
    gets(str2);
    printf("Enter roll and marks\n");
    scanf("%d%d",&roll,&marks);
    fprintf(fp,"\n%s   %d         %s       %d",str,roll,str2,marks);
    return 0;
}