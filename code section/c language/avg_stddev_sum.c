#include <stdio.h>
void fun();
int main()
{
   fun(); 
    return 0;
}

void fun(){
int num[5],sum=0;
float avg,sum1=0;
for(int i=0;i<5;i++){
    printf("Enter number %d\n",i+1);
    scanf("%d",&num[i]);
    sum=sum+num[i];
}
printf("The sum of number entered is %d\n",sum);
avg=sum/5;
printf("The mean of number enterd is %f\n",avg);
for(int i=0;i<5;i++){
sum1=sum1+(num[i]-avg)*(num[i]-avg)/5;
}


printf("The std deviation of entered numbers is %f\n",sum1);
}