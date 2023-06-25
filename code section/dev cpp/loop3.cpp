#include<stdio.h>
int main()
{int i,n,factorial=1;
printf("Enter n:\n");
scanf("%d",&n);
	for(i=1;i<=n;i++){
	factorial=factorial*i;
	}
	printf("The factorial %d is %d",n,factorial);
	return 0;
}
