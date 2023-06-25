#include <bits/stdc++.h>
using namespace std;
void merge(int arr[],int start,int mid,int end)
{
	int left_size=mid-start+1;
	int right_size=end-mid;
	int left[left_size];
	int right[right_size];
	
	for(int i=0;i<left_size;i++){
	left[i]=arr[start+i];}
	
	for(int j=0;j<right_size;j++){
	right[j]=arr[mid+j+1];}
	
	int i=0,j=0,k=start;
	while(i<left_size && j<right_size)
	{
		if(arr[i]<=arr[j])
		arr[k++]=arr[i++];
		else
		arr[k++]=arr[j++];
	}
	
	while(i<left_size)
	{
		arr[k++]=arr[i++];
	}
	
	while(j<right_size)
	{
		arr[k++]=arr[j++];
	}
}
void display(int arr[],int n)
{
	for(int i=0;i<n;i++){
	cout<<arr[i]<<" ";
	}
}

void mergesort(int arr[],int start,int end)
{
	if(start<end)
	{
		int mid=(start+start)/2;
		mergesort(arr,start,mid);
		mergesort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}
int main()
{
	int arr[]={11,23,112,25,42,89,65,35,111,55};
	int n=sizeof(arr)/sizeof(arr[0]);
	mergesort(arr,0,n-1);
	display(arr,n);
}
