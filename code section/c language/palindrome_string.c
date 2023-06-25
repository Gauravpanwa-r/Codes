#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    //printf("Enter the length of string you want to enter\n");
    //scanf("%d",&n);
    char str[100],rev[100];
    printf("Enter the string you want to check\n");
    gets(str);
    strcpy(rev,str);
    strrev(rev);
    if(strcmp(str,rev))
    printf("The string is not palindrome\n");
    else
    {
        printf("The string is palindrome\n");
    }
    return 0;
}
