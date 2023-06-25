#include <stdio.h>
int strlength(char *);
int main()
{   char arr[]="HELLO WORLD";
    printf("string=%s and length=%d",arr,strlength(arr));
    printf("string=%s and length=%d","hello world",strlength("hello world"));
    return 0;
}
strlength(char *x)
{
    int length=0;
    while(*x!='\0')
    {
       length++;
       x++;
    }
    return length;
}
