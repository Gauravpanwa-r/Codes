#include <stdio.h>
int power(int,int);
int main()
{   int x,n;
    printf("Enter the value of x and n\n");
    scanf("%d%d",&x,&n);
    printf("%d",power(x,n));
    return 0;
}
power(int x,int n){
    if(n==0)
    return 1;
    
    return (x*power(x,n-1));
}