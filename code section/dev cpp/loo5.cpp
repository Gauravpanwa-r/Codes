#include<stdio.h>
int main()
{ int n,i,sum=0;
	printf("Enter value of n:\n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i=i+2){
		sum=sum+i;
	}
	printf("The sum of even number under %d is %d\n",n,sum);
	return 0;
}
