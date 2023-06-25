#include<stdio.h>

void main(){
int i,j,n;
printf("Enter n:\n");
scanf("%d",&n);

for(i=1;i<=n;i++){
if(i==1||i==n)
{
    for(int k=1;k<=n;k++){
printf("*");
    }
}
else if (i>1&&i<n)
{   
    printf("*");
    for(int l=2;l<n;l++){
        printf(" ");
    }
    printf("*");
}
printf("\n");
}
}
