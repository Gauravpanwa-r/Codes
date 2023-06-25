#include <stdio.h>
int main()
{   int thread[3][2][3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("Enter the value of array element[%d,%d,%d]\n",i,j,k);
                scanf("%d",&thread[i][j][k]);
            }
        }
    }
    printf("The first element[0,0,0] is %d\n",thread[0][0][0]);
    printf("The first element[2,1,2] is %d\n",thread[2][1][2]);
    return 0;
}