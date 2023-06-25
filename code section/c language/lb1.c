#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t,n,i,j,k,count=0;
    scanf("%d",&t);
    scanf("%d",&n);
    int arr[n];
     while(t--)
     {   
        for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
        for(j=0;j<n;j++)
        {   
            count=0;
            for(k=0;k<n;k++)
            {
                if(arr[k]%arr[j]==0)
                {
                    count++;
                }
            }
            if(count==n)
                break;
        }
        if(count==n)
            printf("%d\n",arr[j]);
        else
            printf("-1\n");
     }
    return 0;
}