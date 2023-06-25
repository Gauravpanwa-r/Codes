#include <stdio.h>
int main()
{
    int n,j,k,i,count=0;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    int num[n];
    for(i=0;i<n;i++)
    {
        printf("Enter element %d\n",i+1);
        scanf("%d",&num[i]);
    }
    for(j=0;j<n;j++)
    {   
        count=0;
        for(k=0;k<n;k++)
        {
            if(*(num+j)<=*(num+k))
            {  
                count++;
                if(count==n)
                {
                  break;
                }
            }
        }
        if(count==n)
        {
            break;
        }
    }
    printf("The smallest number is %d",*(num+j));

    return 0;
}
