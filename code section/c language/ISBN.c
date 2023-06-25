#include <stdio.h>
int main()
{   int sum=0;
    char isbn[15];
    printf("Enter the ISBN code (10-digit)\n");
    gets(isbn);
    for(int i=0;i<10;i++){
       
       sum=sum+(i+1)*(isbn[i]-48);

    }
    if(sum%11==0)
    {
        printf("ISBN number is valid\n");
    }
    else{
        printf("ISBN number is not valid\n");
    }
    return 0;
}

