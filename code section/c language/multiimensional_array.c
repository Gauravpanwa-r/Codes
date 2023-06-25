#include <stdio.h>
int main()
{   int n1,n2;
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
        {
            printf("The value of [%d,%d] element of array is %d\n",i,j,marr[i][j]);
        }
    }
    
    return 0;
}
