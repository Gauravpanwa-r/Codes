#include <stdio.h>
int main()
{
	char *s[ ] = { 
"To err is human...", 
"But to really mess things up...", 
"One needs to know C!!" 
 };
 char *temp=s[0];
 s[0]=s[2];
 s[2]=temp;
 printf("%s\n",s[0]);
 printf("%s\n",s[1]);
 printf("%s\n",s[2]);
 return 0;
}
