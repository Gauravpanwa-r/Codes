#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int m)
{
    for(int i=0;i<m;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int m,n;
    cout<<"Enter m,n:";
    cin>>m>>n;
    int arr1[m+n],arr2[n];
    for(int i=0;i<m;i++)
    {
        cout<<"Element "<<i+1<<":";
        cin>>arr1[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Element "<<i+1<<":";
        cin>>arr2[i];
    }
    int k;
    cout<<"Enter index of array from where you want to insert array:";
    cin>>k;
    for(int i=0;i<m-k;i++)
    {
        arr1[m+n-i-1]=arr1[m-i-1];
    }
    for(int j=0;j<n;j++)
    {
        arr1[k+j]=arr2[j];
    }
    display(arr1,m+n);
}