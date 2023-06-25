#include <stdio.h>
int main()
{
	char *names[]={"raj","ravi","shankar","rahul","amrit"};
    char *temp;
    printf("original names %s and %s\n",names[2],names[3]);
    temp=names[2];
    names[2]=names[3];
    names[3]=temp;
    printf("Changed names %s and %s\n",names[2],names[3]);
    return 0;
}
