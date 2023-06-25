#include <stdio.h>

int main() {
	int num[100],i,j;
	for(i=0;i<100;i++){
	    num[i]=i+1;
	}
	for(i=0;i<100;i++){
	    for(j=2;j<100;j++){
	        if(num[j]!=0&&j%i==0&&i!=1){
	            num[j]=0;
	        }
	    }
	}
	for(i=0;i<100;i++){
	    if(num[i]!=0){
	        printf("%d",num[i]);
	    }
	}
	return 0;
}