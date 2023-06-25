#include <stdio.h>
#include <string.h>

int main(){
	int n,i,j,a,flag;
	printf("ENTER THE SIZE OF CHARACTER MATRIX: ");
	scanf("%d",&n);
	
	char mat[n][n],sub[n];
	printf("ENTER THE ELEMENTS OF CHARACTER MATRIX:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("ENTER ELEMENT AT POSITION %d %d: ",i+1,j+1);
			scanf(" %c",&mat[i][j]);
		}
	}
	scanf("%c");
	
	printf("CHARACTER MATRIX:\n");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%c ",mat[i][j]);
		}
		printf("\n");
	}
	printf("ENTER THE SUBSTRING (MAX SIZE: %d): ",n);
	gets(sub);
	int lensub=strlen(sub);
	if(lensub>n){
		printf("SUBSTRING IS LONG FOR THE CHARACTER MATRIX");
	}
	else{
		
		
		for(i=0;i<n;i++){												//CHECKING WHETHER PRESENT IN ROW
			for(j=0;j<n;j++){
				flag=0;
				if(sub[0]==mat[i][j]){
					
					for(a=0;a<lensub;a++){
						if(j+a>=n){										//TO CHECK IF INDEX EXCEEDS ROW LIMIT
							flag=0;				
							break;
						}
						if(sub[a]==mat[i][j+a]){ 						//MATCHING SUBSTRING AND THE ROW ELEMENTS;
							flag=1;
						}else{					 						//BREAKING LOOP IF MISMATCH
							flag=0;
							break;
						}
					}
				}
				if(flag){												//IF SUBSTRING MATCHES BREAK ROW ELEMENTS ITERATION
					break;
				}
			}
			if(flag){
				printf("\nPRESENT IN ROW %d FROM POSITION %d\n",i+1,j+1);
				break;
			}
		}
		if(!flag){
			printf("\nSUBSTRING ABSENT IN ANY ROW OF CHARACTER MATRIX\n");	//INCASE OF ABSENCE IN ANY ROW
		}
		
		
		for(i=0;i<n;i++){													//CHECKING WHETHER PRESENT IN COLUMN
			for(j=0;j<n;j++){
				flag=0;
				if(sub[0]==mat[j][i]){
					for(a=0;a<lensub;a++){									//TO CHECK IF INDEX EXCEEDS COLUMN LIMIT
						if(j+a>=n){
							flag=0;
							break;
						}if(sub[a]==mat[j+a][i]){							//MATCHING SUBSTRING AND THE COLUMN ELEMENTS;
							flag=1;
						}else{											    //BREAKING LOOP IF MISMATCH
							flag=0;
							break;
						}
					}
				}
				if(flag){													//IF SUBSTRING MATCHES BREAK COLUMN ELEMENTS ITERATION
					break;
				}
			}
			if(flag){
				printf("\nPRESENT IN COLUMN %d AT POSITION %d\n",i+1,j+1);
				break;
			}
		}
		if(!flag){
			printf("\nSUBSTRING ABSENT IN ANY COLUMN OF CHARACTER MATRIX\n");
		}
		
		for(i=0,j=0;i<n;i++,j++){											//CHECKING WHETHER PRESENT IN MAIN DIAGONAL
			flag=0;
			if(sub[0]==mat[i][j]){
				for(a=0;a<lensub;a++){
					if(i+a>=n){
						flag=0;
						break;
					}
					if(sub[a]==mat[i+a][j+a]){
						flag=1;
					}else{
						flag=0;
						break;
					}
				}
			
			}
			if(flag){
				printf("SUBSTRING PRESENT IN MAIN DIAGONAL AT POSITION %d %d",i+1,j+1);
				break;
			}
		}
		if(!flag){
			printf("\nSUBSTRING ABSENT IN MAIN DIAGONAL OF CHARACTER MATRIX\n");
		}
	}
	
	return 0;	
}
