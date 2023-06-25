#include <bits/stdc++.h>
void selection_sort(int arr[],int n)
{
    int i,j=0;
    for(i=1;i<n;i++)
    {
        int x=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
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
    selection_sort(arr,n);
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}