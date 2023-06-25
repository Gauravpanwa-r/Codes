#include <bits/stdc++.h>
void bubblesort(int arr[],int n);
using namespace std;
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
    bubblesort(arr,n);
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}
void bubblesort(int arr[],int n)
{   
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
