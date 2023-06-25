#include <stdio.h>

int main()
{
    int n,count=0;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==arr[n-i-1]){
            count++;
        }
    }
        if(count==n){
            printf("The given array have i and n-1 same elements\n ");
        }
        else{
            printf("The given array have i and n-1 elements different\n "); 
        }
    

    return 0;
}