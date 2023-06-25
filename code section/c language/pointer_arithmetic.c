#include <stdio.h>
int main(){
    int i=25,*x;
    float j=5.5,*y;
    char c='$',*z;
    x=&i;
    y=&j;
    z=&c;
    printf("%d\n%d\n%d\n",x,y,z);
    x++,y++,z++;
    printf("%d\n%d\n%d\n",x,y,z);
    return 0;
}