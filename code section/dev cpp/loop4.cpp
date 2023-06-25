#include<stdio.h>
int main(){
int n,i,sum=0;

printf("Enter n:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
	sum=sum+i;
}	
	
printf("The sum of %d number is %d",n,sum);	
	return 0;
}
