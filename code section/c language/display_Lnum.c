#include <stdio.h>
#include <string.h>
int main()
{
    int n,a,l;
    printf("Enter the number that you want to display :");
    scanf("%d",&n);
    while(n>0)
    {
        n=n/10;
        l++;
    }
}