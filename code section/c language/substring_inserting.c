#include <Stdio.h>
#include <string.h>
int main()
{
    char str[100],t;
    char sub_str[15];
    printf("Enter the main string of length (100)\n");
    gets(str);
    int l=strlen(str);
    printf("Enter the substring (limit 15)\n");
    gets(sub_str);
    int n,i,j,k=0;
    char *x=str;
    printf("Enter the position from starting where you want to insert string\n");
    scanf("%d", &n);
    i=n;
    while (*x != '\0')
    {
        for(j=n;j<=l-n;j++)
        {
            t=str[j];
            str[j+1]=t;
        }
        str[i]=sub_str[k];
        i++;
        k++;
        x++;
    }
    printf("%s",str);
    return 0;
}
