#include <stdio.h>

struct yr{
	char month[100];
	int days;
}d[12];

d[0].month="January";d[0].days=31;
d[1].month="February";d[1].days=28;
d[2].month="March";d[2].days=31;
d[3].month="April";d[3].days=30;
d[4].month="May";d[4].days=31;
d[5].month="June";d[5].days=30;
d[6].month="July";d[6].days=31;
d[7].month="August";d[7].days=31;
d[8].month="September";d[8].days=30;
d[9].month="October";d[9].days=31;
d[10].month="November";d[10].days=30;
d[11].month="December";d[11].days=31;

int main()
{
	int year,month,day=0;
	printf("Write year and month of calender\n");
	scanf("%d %d",&year,&month);
	if((year-2000)%4==0)
	{
		day=((year-2000-(year-2000)%4)*365)+((year-2000)%4)*366;
	}
	else
	{
		day=((year-2000-((year-2000)+1)%4)*365)+((year-2000)%4)*366;
	}
	day=
	
	return 0;
}
