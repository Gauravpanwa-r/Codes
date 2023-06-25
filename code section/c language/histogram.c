#include <stdio.h>


int main() {
	int arr[5],i,j,k;
	
	for(i=0;i<5;i++){
		printf("ENTER NUMBER OF EMPLOYEES IN GROUP %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++){
		for(k=0;k<3;k++){
			for(j=0;j<11+arr[i];j++){
				if(k==0||k==2){
					if(j<10) printf(" ");
					else if(j==10) printf("|");
					else printf("*");
				}
				else{
					printf("Group-%d",i+1);
					for(j=7;j<11+arr[i];j++){
						if(j<10) printf(" ");
						else if(j==10) printf("|");
						else if(j==arr[i]+10) printf("*(%d)",arr[i]);
						else printf("*");
					}
				}
			}
			printf("\n");
		}
		
	}
	
	return 0;
}