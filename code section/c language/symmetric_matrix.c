#include <stdio.h>
int main()
{   int n1,n2,i,count=0;
    printf("Enter the value of n1 and n2\n");
    scanf("%d%d",&n1,&n2);
    int arr[n1][n2];
    if(n1!=n2)
    {
        printf("Only square matrix can be symmetric\n");
    }
    else{
    for(i=0;i<n1;i++)
    {   for(int j=0;j<n2;j++)
        {
            printf("Enter the value of element[%d][%d]\n",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }    
    }
    for(i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                count++;
            }
        }    
    }
    }
    if(count==n1*n2)
    {
        printf("The matrix is symmetric\n");
    }
    else
    {
        printf("The matrix is is not symmetric\n");
    }
    return 0;
}
