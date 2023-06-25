#include <stdio.h>
int main()
{
	int math,physic,chemistry;
	printf("Enter the marks of math:\n");
	scanf("%d",&math);
	
	printf("Enter the marks of physic:\n");
	scanf("%d",&physic);
	
	printf("Enter the marks of chemistry:\n");
	scanf("%d",&chemistry);
	
	int total;
	total=(math+physic+chemistry)/3;
	
	if(total<40||math<33||physic<33||chemistry<33)
	{
		printf("You are failed\n\a");
	}
	else{
		printf("You are passed\n");
	}
	return 0;
}
