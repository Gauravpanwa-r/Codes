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
	for(j=0;j<n;j++)
	{   count=0;
		printf("HELLO 000001\n");
		for(l=0;l<19;l++)
		{
			if(names[j][l]>names[j+1][l])
			{
				printf("HELLO 000002\n");
				count++;
				break;
			}
		}
		if(count==1)
		{
			//for(int m=0;m<20;m++)
			//{
				printf("HELLO 000003\n");
				strcpy(t,names[j]);
				strcpy(names[j],names[j+1]);
				strcpy(names[j+1],t);
			//}
			puts(names[j]);puts(names[j+1]);
		}
	}
	int k;
	for(k=0;k<n;k++)
	{
		printf("HELLO 000004\n");
		puts(names[k]);printf("\n");
	}
	return 0;
}
