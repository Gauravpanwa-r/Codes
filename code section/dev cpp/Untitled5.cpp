#include<stdio.h>
int main()
{
	float inc,tax1,tax2,tax3;
	 printf("Enter your income\n");
	 scanf("%f",&inc);
	tax1=0.05*inc;
	tax2=0.2*inc;
	tax3=0.3*inc;
	
	if(inc<250000)
	{
		printf("Your tax is 0\n");
	}
	 
	 else if(inc>=250000 && inc<=500000)
	 {
	 	printf("Tax is %f\n",tax1);
	 }
	else if(inc>500000 && inc<=1000000)
	{
	printf("Tax is %f\n",tax2);
	}
	
	else if(inc>1000000)
	{
	printf("Tax is %f\n",tax3);
	}
	return 0;
}
