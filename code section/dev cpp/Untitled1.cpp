#include<stdio.h>
int main()
{
	int a,b,c,abc;
	
	
	printf("ENTER NUMBER A");
	scanf("%d",&a);
	
	printf("ENTER NUMBER B");
	scanf("%d",&b);
	
	printf("ENTER NUMBER C");
	
	scanf("%d",&c);
	
	printf("THE ENTERED NUMBER IS %d%d%d \n",a,b,c);
	
	abc=a*100+b*10+c*1;
	int cube=a*a*a+b*b*b+c*c*c;
	
	if(abc==cube)
	{
		printf("The entered number is amstrong number");
		
	}
	else{
		printf("The entered number is not amstrong number");
	}
	return 0;
}
