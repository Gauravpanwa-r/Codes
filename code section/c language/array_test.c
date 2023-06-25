#include <stdio.h>
int main()
{   int arr[5],count=0;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
        if(arr[1]==arr[3]){
           count++;
           break;
        }
    }
    if(count==1)
    {
        printf("Hello World\n");
    }
    return 0;
}
