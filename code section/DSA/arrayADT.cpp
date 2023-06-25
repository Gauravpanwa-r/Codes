#include <stdio.h>
#include <stdlib.h>
struct array {
    int *a;
    int length;
    int size;
};
void swap(int *x,int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}
void reverse(struct array arr)
{
    int i=0,j=arr.length-1;
    for(i=0;i<arr.length/2;i++)
    {
        swap(&arr.a[i],&arr.a[j]);
        j--;
    }
}
void delet(int arr[],int index,int n)
{
    for(int i=index;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
}
void insert(int arr[],int index,int n)
{
    int element,i;
    printf("Enter element that you want to insert:");
    scanf("%d",&element);
    for(i=n;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[i]=element;
}
void display(int arr[],int n){
    for(int j=0;j<n;j++)
    printf("%d ",arr[j]);
    printf("\n");
}
int main()
{
    int index;
    struct array arr;
    printf("Enter size of array:");
    scanf("%d",&arr.size);
    printf("Enter length of array:");
    scanf("%d",&arr.length);
    arr.a=(int *)malloc(sizeof(int)*arr.size);
    printf("Enter all the elements of array:");
    for(int i=0;i<arr.length;i++)
    scanf("%d",&arr.a[i]);
    printf("Enter at which index you want to insert the element:");
    scanf("%d",&index);
    display(arr.a,arr.length);
    insert(arr.a,index,arr.length);
    arr.length++;
    display(arr.a,arr.length);
    printf("Enter at which index you want to delete the element:");
    scanf("%d",&index);
    delet(arr.a,index,arr.length);
    arr.length--;
    display(arr.a,arr.length);
    reverse(arr);
    display(arr.a,arr.length);
}