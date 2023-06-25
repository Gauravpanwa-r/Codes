
#include <stdio.h>
int main()
{   char *p;
    p="I AM WRITING PROGRAM USING POINTER";
    while(*p!='\0'){
    printf("%c",*p); 
    p++;
    }
    return 0;
}

