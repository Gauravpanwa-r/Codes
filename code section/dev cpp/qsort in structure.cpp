#include <stdio.h>
#include <stdlib.h>
struct cricketer
{
	char name[25];
	int age;
	int tmatch;
	int avg_run;
}c[2];
int comparator (const void * p1, const void * p2)
{
  return (*(int*)p1 - *(int*)p2);
}
int main()
{
	int i,j,k;
	for(i=0;i<2;i++)
	{
		printf("NAME :");
		scanf("%s",c[i].name);
		printf("AGE :");
		scanf("%d",&c[i].age);
		printf("NO OF TEST MATCHES :");
		scanf("%d",&c[i].tmatch);
		printf("AVERAGE RUN :");
		scanf("%d",&c[j].avg_run);
    }
	qsort(&c[0].avg_run,2,sizeof(c[0]),comparator);
	for(j=0;j<2;j++)
	{
		printf("NAME :%s\n",c[j].name);
		printf("AGE :%d\n",c[j].age);
		printf("NO OF TEST MATCHES %d:\n",c[j].tmatch);
		printf("AVERAGE RUN :%d\n",c[j].avg_run);
	}
	return 0;
}
