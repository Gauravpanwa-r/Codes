#include<stdio.h>
int main(){
	int num,a,b,c,d,e,num2,num3,num4;
	printf("Enter the 5 digit number\n\a");
	scanf("%d",&num);
	num2=num%10000;
	num3=num2%1000;
	num4=num3%100;
	a=num/10000;
	b=num2/1000;
	c=num3/100;
	d=num4/10;
	e=num4%10;
	
	if(num==10000*e+1000*d+100*c+10*b+a)
	{
		printf("The entered number is palindrome number");
	}
	else{
	printf("The entered number is not palindrome number");
}
return 0;
	
}
