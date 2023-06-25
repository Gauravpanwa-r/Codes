#include <bits/stdc++.h>
using namespace std;
void display (int arr[])
{
    for(int i=0;i<10;i++)
    cout<<arr[i]<<" ";
}
void swap(int *x,int *y)
{
    int t = *x;
    *x = *y;
    *y = t;
}

void negposset(int arr[])
{
    int i=0,j=9;
    while(i<j)
    {
        while(arr[i]<0)
        i++;
        while(arr[j]>0)
        j--;
        swap(&arr[i],&arr[j]);
    }
    display(arr);
}
int main()
{
    int arr[10];
    cout<<"Enter all elements of array:";
    for(int i=0;i<10;i++)
    cin>>arr[i];
    negposset(arr);
}