#include <stdio.h>
int main()
{   int i,j,n1,n2,count=0;
    printf("Enter the value of n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    int marr[n1][n2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            printf("Enter value of [%d,%d] element of array\n",i,j);
            scanf("%d",&marr[i][j]);
        }
    }
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {   count=0;
            for(int k=0;k<n1;k++)
            {
                for(int l=0;l<n2;l++)
                {
                    if(marr[i][j]>marr[k][l])
                    {
                        count++;
                        if(count==n1*n2-1)
                        {
                            break;
                        }
                    }
                }
                if(count==n1*n2-1)
                {
                    break;
                }
            }
            if(count==n1*n2-1)
            {
                break;
            }
        }
        if(count==n1*n2-1)
        {
            break;
        }
    }
    printf("The greatest number is %d",marr[i][j]);
    
    return 0;
}
