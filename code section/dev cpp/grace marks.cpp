#include<stdio.h>
int main(){
int clas_s;
int fail;

printf("Enter the class 1,2 or 3\n");
scanf("%d",&clas_s);

printf("Enter the number of subjects in which you get failed\n");
scanf("%d",&fail);
	
switch(clas_s){
case 1 :
	if(fail<=3){
	printf("The grace is of %d marks\n",5*fail);	
	}
	else{
	printf("The grace marks is 0\n");
    }

	break;

 case 2 :
	if(fail<=2){
	printf("The grace marks is of %d marks\n",4*fail);	
	}
	else{
		printf("The grace marks is 0\n");
	}

	break;

	case 3 :
		if(fail<=1){
			printf("The grace marks is of %d marks\n",5*fail);
		}
		
		else{
			printf("The grace marks is 0\n ");
		}
	
		break;
}
	
	
return 0;	
}
