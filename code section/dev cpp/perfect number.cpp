#include<stdio.h>
int main(){
int num,i;
int sum=0;

printf("Enter the number\n");
scanf("%d",&num);

for (i=1;i<num;i++)	{
	if(num%i==0){
	sum=sum+i;	
	}
   }
if(num==sum){
	printf("The number is perfect number");
}	
	
else{
printf("The number is not perfect number");	
}	
	
return 0;	
}
