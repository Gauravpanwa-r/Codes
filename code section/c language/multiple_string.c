#include <stdio.h>
#include <string.h>
#define found 1
#define notfound 0
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    scanf("%c");
    char masterlist[n][25];
    for(int i=0;i<n;i++)
    {
        printf("Enter name %d\n",i+1);
        fgets(&masterlist[i][0],25,stdin);
    }
    char yourname[25];
    int flag=notfound,a;
    printf("Enter your name\n");
    fgets(yourname,25,stdin);
    for(int j=0;j<n;j++)
    {   a=strcmp(yourname,&masterlist[j][0]);
        if(a==1)
        {
            printf("Welcome ! your name is in masterlist\n");
            flag=found;
            break;
        }
    }
    if(flag==notfound)
    printf("You are are a trespasser\n");
    return 0;
}
