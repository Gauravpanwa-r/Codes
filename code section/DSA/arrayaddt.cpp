#include <bits/stdc++.h>
using namespace std;
void insertElement(int arr[],int el,int n)
{
    int i=n-1;
    while(arr[i]>el)
    {
        arr[i+1]=arr[i];
        i--;
    }
    arr[i+1]=el;
}
void display(int arr[],int n)
{
    for(int j=0;j<n;j++)
    cout<<arr[j]<<" ";
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int arr[n];
    cout<<"Enter all elements in sorted array:";
    for(int i=0;i<n-1;i++)
    cin>>arr[i];
    int element;
    cout<<"Enter element that you want to insert in array:";
    cin>>element;
    insertElement(arr,element,n);
    display(arr,n);
}