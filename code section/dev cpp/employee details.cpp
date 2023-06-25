#include <stdio.h>
struct employee
{
	int code;
	char name[20];
	int date[3];
}e[2];
int main()
{   
    int i,d[3],j; 
	for(i=0;i<2;i++)
	{
		printf("EMPLOYEE CODE :");
		scanf("%d",&e[i].code);
		printf("NAME :");
//		scanf("%c");
		gets(e[i].name,19);
		printf("DATE OF JOINING(1.dd/2.mm/3.yyyy) :");
		scanf("%d%d%d",&e[i].date[i],&e[i].date[i+1],&e[i].date[i+2]);
	}
	printf("TODAY's DATE (1.dd/2.mm/3.yyyy):");
	scanf("%d%d%d",&d[0],&d[1],&d[2]);
	for(j=0;j<2;j++)
	{
		if((d[2]-e[j].date[2])>3)
		printf("%s\n",e[j].name);
		else if((d[2]-e[j].date[2])==3)
		{
			if((d[1]-e[j].date[1]))
			printf("%s\n",e[j].name);
			else if((d[1]-e[j].date[1])==0)
			{
				if((d[0]-e[j].date[0])>=0)
				printf("%s\n",e[j].name);
			}
		}
	}
	return 0;
}
