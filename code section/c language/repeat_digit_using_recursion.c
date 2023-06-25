#include <stdio.h>
int repeat_digit(int *a,int n);
int main(int argc, char const *argv[])
{   int n,cn,count=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(n>9)
    {
        n=n/10;
        cn++;
    }
    int arr[]={};
    cn++;
    repeat_digit(arr,n);
    while(cn--)
    {   
        if(arr[cn-1]==arr[cn-2])
        {
            printf("The entered number has repeated digits\n");
        }
        else
        {   
            count++;
        }
    }
    
    if(count==cn)
    printf("The entered number don't have repeated digits\n");    

    return 0;
}
int repeat_digit(int *a,int n)
{
    if(n<10)
    {   
        *a=n;
        return ;
    }    
    *a=n%10;
    n=n/10;
    repeat_digit(a++,n);

}
