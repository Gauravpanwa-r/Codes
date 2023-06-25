#include <bits/stdc++.h>
using namespace std;
void display (int arr[])
{
    for(int i=0;i<15;i++)
    cout<<arr[i]<<" ";
}
void merge(int a[],int b[],int c[])
{ 
    int i=0,j=0,k=0;
    while(i<10&&j<5)
    {
        if(a[i]<b[j])
        c[k++]=a[i++];
        else
        c[k++]=b[j++];
    }
    while(i<10)
    c[k++]=a[i++];
    while(j<5)
    c[k++]=b[j++];
}
int main()
{
    int arr1[10],arr2[5],arr3[15];
    cout<<"Enter values of array 1:";
    for(int i=0;i<10;i++)
    cin>>arr1[i];
    cout<<"Enter values of array 2:";
    for(int j=0;j<5;j++)
    cin>>arr2[j];
    merge(arr1,arr2,arr3);
    display(arr3);
}