#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int m)
{
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void selection_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {   
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        if(i!=min)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter number of elements in array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter "<<i+1<<" element:";
        cin>>arr[i];
    }
    selection_sort(arr,n);
    display(arr,n);
}