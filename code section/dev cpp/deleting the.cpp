#include <stdio.h>
int main()
{   
    int i,j;
	char sen[80];
	printf("Write a sentence\n");
	gets(sen);
	for(i=0;sen[i]!='\0';i++)
	{
		if((sen[i]=='t' || sen[i]=='T') && (sen[i+1]=='h' || sen[i+1]=='H') && (sen[i+2]=='e' || sen[i+2]=='E'))
		{
			for(j=i;sen[j]!='\0';j++)
			{   
			    if(j==i)
				{
			  
				sen[j]=sen[j+3];
				sen[j+1]=sen[j+4];
				sen[j+2]=sen[j+5];
				j+=2;
			    }
			    else
			    {
			    sen[j]=sen[j+3];
				}
			}
		}
		
	}
	printf("%s",sen);
	return 0;
}
