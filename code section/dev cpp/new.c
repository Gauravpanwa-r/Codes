#include<stdio.h>
int main()
{
	int age;
	char gender, place, health;
	
	printf("Enter your age\n");
	scanf("%d", &age);
	
	printf("Enter your gender\n");
	scanf(" %c", &gender);
	
	printf("Enter c for city and v for village\n");
	scanf(" %c", &place);
	
	printf("Enter g for good health and for p for poor health\n");
	scanf(" %c", &health);
	
	return 0;
}
