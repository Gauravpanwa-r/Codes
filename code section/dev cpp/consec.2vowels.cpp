#include <stdio.h>
int main()
{   
    int i,j=0;
	char sen[80];
	printf("Write a sentence\n");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		if((sen[i]=='a' || sen[i]=='e' || sen[i]=='i' || sen[i]=='o' || sen[i]=='u') &&(sen[i+1]=='a' || sen[i+1]=='e' || sen[i+1]=='i' || sen[i+1]=='o' || sen[i+1]=='u'))
		{
			j++;
			printf("%c%c\n",sen[i],sen[i+1]);
		}
		
	}
	printf("The occurence of two consecutive vowels is %d\n",j);
	return 0;
}
