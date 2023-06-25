#include <stdio.h>
void swap(int *x,int *y)
{
    int t=*x;
    *x=*y;
    *y=t;
}
void selection_sort(int arr[],int n)
{
	int i_max=0;
    for(int i=0;i<n;i++)
    {
    	i_max=i;
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[i_max])
            i_max=j;
        }
        swap(&arr[i],&arr[i_max]);
    }
}
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",arr[i]);
}
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    selection_sort(arr,n);
    display(arr,n);
}	
