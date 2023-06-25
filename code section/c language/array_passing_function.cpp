#include <stdio.h>
#include <stdlib.h>
int* fun(int n)
{
    int *p;
    p=(int *)malloc(n*sizeof(int));
    return p;
}
using namespace std;
int main()
{
    int *a;
    int n;
    printf("Enter number n:") ;
    scanf("%d",n) ;
    a=fun(n);
}