#include <stdio.h>
int dsum(int n);
int main()
{
    int n;
    printf("Enter digit\n");
    scanf("%d",&n);
    printf("The digital sum of %d is %d",n,dsum(n));
    return 0;
}
int dsum(int n)
{
    int a;
    static int sum=0;
    if(n<10)
    return n;
    else
    {
        a=n%10;
        n=n/10;
        sum=a+dsum(n);
        return (sum);
    }
}
