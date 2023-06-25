#include <stdio.h>
#include <string.h>
int main()
{   
    char x[50]="a";char z[50];
    char y[50]="b";
    for(int i=0;i<=5;i++)
    {
        printf("%s\n",x);
        strcpy(z,x);
        strcpy(x,y);
        strcat(y,z);
    }
return 0;
}
