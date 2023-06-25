#include<stdio.h>
void prime_factor(int n);
int main(){
int n,i;	
printf("Enter the number n:\n");	
scanf("%d",&n);
prime_factor(n)	;
 return 0;
}
void prime_factor(int n)
{int i=2;
	while(i<=n){
if(n%i==0){
	printf("%d\n",i);
	n=n/i;
	continue;
	}
i++;	
}
}
