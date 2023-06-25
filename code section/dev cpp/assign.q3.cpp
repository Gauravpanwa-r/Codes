#include<stdio.h>
int main()
{
	float sp,profit;
	
	printf("Enter the selling price of 15 items\n");
	scanf("%f",&sp);
	
	printf("Enter the profit on 15 items\n");
	scanf("%f",&profit);
	
	printf("The cost price of 1 item is %f",(sp-profit)/15);
	
	return 0;
}
