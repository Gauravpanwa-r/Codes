#include <stdio.h>
int main()
{int a,b,c,d,e,num,num2;
printf("Enter the number\n");

scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
num=10000*a+1000*b+100*c+10*d+e;

num2=10000*e+1000*d+100*c+10*b+a;

if(num==num2)
{printf("The nmber is palindrome number");

	}	
else{
	printf("The number is not palindrome number ");
}	
	
	return 0;
}
