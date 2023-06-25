#include<stdio.h>
int main(){
	int i;
;	printf("Enter the number\n");
	scanf("%d",&i);
	
	if(i==1){
		printf("The enterd number is neither prime nor even\n");
	}
	
	else{
	
	if(i==2||i==3||i==5||i==7||i==11||i==13||i==17||i==19||i==23){
		printf("The entered number is prime number\n");
	}
	else{
	
		if(i%2==0||i%3==0||i%5==0||i%7==0||i%11==0||i%13==0||i%17==0||i%19==0||i%23==0)
		{
		printf("The number enterd is not prime number\n");
		
		}
		else{
			printf("The number enterd is prime number\n");
		}
	}
}
	return 0;	
	}
	

	
	
	

