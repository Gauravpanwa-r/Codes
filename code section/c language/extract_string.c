#include <stdio.h>
int main()
{
    char sen[100];
    printf("Enter the string\n");
    gets(sen);
    int i,j;
    printf("Enter the elements i you want to see as output after the j elements from start\n");
    scanf("%d%d",&i,&j);
    for(int k=0;k<i;k++)
    {
        printf("%c",*(sen+j+k));
    }
    return 0;
}
