#include <stdio.h>
int num(int);
int main()
{   int x;
printf("enter number x\n");
scanf("%d",&x);
num(x);
   
    
    return 0;
}
int num(int x){
if(x==0)
return 0;
printf("%d\n",x);
return num(x-1);
}