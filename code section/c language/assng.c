#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	
	char gender;           
	printf("Enter your gender\n");
	scanf(" %c",&gender);
	
	char place;
	printf("Enter c for city and v for village\n");
	scanf(" %c",&place);
	
	char health;
	printf("Enter g for good health and p for poor health\n");
	scanf(" %c",&health);
	
	if(age>=25&&age<=35 ){
	
	if(gender=='m'&&place=='c'&&health=='g'){
	
	printf("your premium rate is 0.004 and maximum insurance amount is 2 lac\n");
	
	}
		
	else if(gender=='f'&&place=='c'&&health=='g'){
	
	printf("your premium rate is 0.003 and maximum insurance amount is 1 lac\n");
	
	}
	
	else if(gender=='m'&&place=='v'&&health=='p')
	{
	printf("your premium rate is 0.006 and maximum insurance amount is 10k\n");
	
	}
	
	}
	else{
		printf("you are not insured\n");
	}
	return 0;
}