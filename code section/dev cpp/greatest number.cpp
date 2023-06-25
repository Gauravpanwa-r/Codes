#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter number a,b,c,d\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	
	if(a>b&&a>c&&a>d)
	{
		printf("The greatest number is a=%d",a);
	}
	else if(b>a&&b>c&&b>d){
	printf("The greatest number is b=%d",b);	
	}
	else if(c>a&&c>b&&c>d){
	printf("The greatest number is c=%d",c);	
	}
	else if(d>a&&d>b&&d>c)
	{
		printf("The greatest is d=%d",d);
	}
	
	
	return 0;
	
	
}
