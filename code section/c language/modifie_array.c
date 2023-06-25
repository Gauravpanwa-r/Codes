#include <stdio.h>
void modify(int *,int);
int main()
{   int i,n;
    printf("Enter the length of array data\n");
    scanf("%d",&n);
    int data[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&data[i]);
    }
    modify(data,n);
    for(i=0;i<n;i++)
    {
    printf("Element %d = %d\n",i+1,data[i]);
    }
    return 0;
}
void modify(int *x,int n)
{
    for(int i=0;i<n;i++)
    {
        *x=*x*3;
        x++;
    }
}
