#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[]={1,2,3,4,5,6,6,8,6,6,6,6,6,7,6,8};
    int i=sizeof(arr)/sizeof(arr[0]);
    printf("%d",i);
    return 0;
}
