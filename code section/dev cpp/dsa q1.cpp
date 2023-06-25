#include <bits/stdc++.h>
using namespace std;
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	struct array{
		int *a;
		int length;
		int size;
	}arr;
	cout<<"Enter length:" ;
	cin>>arr.length;
	arr.size=arr.length*sizeof(int);
	arr.a=new int[arr.size];
	for(int i=0;i<arr.length;i++)
	{
		cin>>arr.a[i];
	}
	display(arr.a,arr.length);
}
