#include <stdio.h>
int func1(int y);
struct customer
{
	int acc_no;
	char name[25];
	int balance; 
}c[10];
struct dow
{
	int acct_no;
	int amount;
	int code;
}dw;
int main()
{   
    int i,j,k,a=0,t;
	for(i=0;i<3;i++)
    {
        printf("ACCOUNT NO. %d:",i+1);
        scanf("%d",&c[i].acc_no);
        printf("NAME :");
        scanf("%c");
        gets(c[i].name);
        printf("BALANCE :");
        scanf("%d",&c[i].balance);
    }
    printf("1.BELOW 100 BALANCE ACCOUNT DETAILS\n2.WITHDRAW OR DEPOSITE\n");
    scanf("%d",&t);
    switch(t)
    {
    case 1:	
    for(j=0;j<3;j++)
    {
        a=func1(c[j].balance);
		if(a==1)
		{
			printf("NAME = %s\n",c[j].name);
			printf("ACCOUNT NUMBER = %d\n",c[j].acc_no);
		}	
	}
	break;
	case 2:
		int t1;
		printf("1.WITHDRAW\n2.DEPOSITE\n");
		scanf("%d",&t1);
		switch(t1)
		{
			case 1:
				printf("1.ACCOUNT NUMBER\n2.AMOUNT\n3.CODE\n\n");
				scanf("%d%d%d",&dw.acct_no,&dw.amount,&dw.code);
				for(k=0;k<3;k++)
				{
				if((c[k].balance-dw.amount)<100)
				printf("The balance is insufficient for the specified withdrawal");
			    }
			    break;
			case 2:
				printf("1.ACCOUNT NUMBER\n2.AMOUNT\n3.CODE\n ");
				scanf("%d%d%d",&dw.acct_no,&dw.amount,&dw.code);
				printf("Your have deposited %d amount",dw.amount);
				break;
		}
		break;
    }
}
func1(int t)
{
	if(t<100)
	return 1;
	else
	return 0;
}
