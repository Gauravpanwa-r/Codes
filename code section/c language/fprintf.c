#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    char str[25];
    int age=20;
    char city[]="Alwar";
    FILE *fp;
    fp=fopen("abc.txt","w");
    if(fp==NULL)
    {
    printf("FILE NOT EXIST");
    exit(1);
    }
    printf("Enter the string :");
    gets(str);
    fprintf(fp,"NAME :%s\nAGE :%d\nCITY :%s",str,age,city);
    fclose(fp);
}