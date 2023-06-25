#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,count=0;
    printf("Enter the length of string you want to enter\n");
    scanf("%d",&n);
    char str[n];
    gets(str);
    if(str==strrev(str))
    printf("The string is palindrome\n");
    else
    {
        printf("The string is not palindrome\n");
    }
    return 0;
}

