#include<stdio.h>
int main(){
	int amount;
	printf("Enter the amount in multiple of hundred \n");
	scanf("%d",&amount);
	
	printf("Total currency notes of 10 is %d\n",amount/10);
	printf("Total currency notes of 50 is %d\n",amount/50);
	printf("Total currency notes of 100 is %d\n",amount/100);
	
	return 0;
}

