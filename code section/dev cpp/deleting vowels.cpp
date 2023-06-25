#include <stdio.h>
int main()
{   
    int i,j;
	char sen[80];
	printf("Write a sentence\n");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		if(sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u')
		{
			for(j=i;sen[j]!='\0';j++)
			{
				sen[j]=sen[j+1];
			}
			i--;
			continue;
		}
		
	}
	printf("%s",sen);
	return 0;
}
