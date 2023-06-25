#include <stdio.h>
#include <string.h>
int main()
{
	int n,count=0,i,j,l;
	char t[20];
	printf("Enter number of names\n");
	scanf("%d",&n);
    scanf("%c");
	char names[n][20];
	for(i=0;i<n;i++)
	{
		printf("Enter name %d:\n",i+1);
		gets(names[i]);
	}
	for(j=0;j<n-1;j++)
	{   count=0;
		for(l=0;l<19;l++)
		{
			int l=strcmp(names[j],names[j+1]);
			if(l==1)
			{
				count++;
				break;
			}
		}
		if(count==1)
		{
			strcpy(t,names[j]);
			strcpy(names[j],names[j+1]);
			strcpy(names[j+1],t);
		}
	}
	int k;
	for(k=0;k<n;k++)
	{
		puts(names[k]);printf("\n");
	}
	return 0;
}
