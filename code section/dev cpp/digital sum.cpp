#include<stdio.h>
int main(){
	int a,b,i,n,s1,sum=0;
	printf("Enter n:\n");
	scanf("%d",&n);
	
	a=n/10;
	b=n%10;
	s1=a*45;
	for(i=1;i<=a;i++){
		sum=sum+i;
	}
	int sum2=0;
	for(i=1;i<=a-1;i++){
		sum2=sum2+i*9;
	}
	int sum3=0;
	for(i=(a*10)+1;i<b;i++){
		sum3=sum3+i;
	}
	int t_sum=s1+sum+sum2+sum3;
	printf("%d",t_sum);
	return 0;
}
