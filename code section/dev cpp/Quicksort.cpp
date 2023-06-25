#include <bits/stdc++.h>
using namespace std;
int partition(int arr[],int l,int h)
{
	int i=l,j=h;
	int pivot=arr[l];
	while(i<j)
	{
		do{
			i++;
		}while(pivot>=arr[i]);
		do{
			j--;
		}while(arr[j]>pivot);
		if(i<j)
		swap(arr[i],arr[j]);
	}
	swap(arr[l],arr[j]);
	return j;
}
void quicksort(int arr[],int l,int h)
{
	if(l<h)
	{
		int j = partition(arr,l,h);
		quicksort(arr,l,j);
		quicksort(arr,j+1,h);
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
}
int main()
{
	int n;
	cout<<"Enter n:";
	cin>>n;
	int arr[n];	
	for(int i=0;i<n;i++)
	cin>>arr[i];
	quicksort(arr,0,n-1);
	display(arr,n);
}	
