#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ 
  int n,rand_num;
  srand(time(NULL))	;
  rand_num=rand()%100;
  
  printf("Guess the number\n");
  
  for(int i=1;i<=7;i++){
  	scanf("%d",&n);
  	if(i==7&&n!=rand_num){
  	printf("Better luck next time!\n");
  	break;
	  }
    else{
	
  	if(n>rand_num)
  	printf("Enter a lower value\n");
  	
  	else if(n<rand_num)
  	printf("Enter a higher value\n");
	  
	else if(n==rand_num){
    printf("Wow! you won the game\n");	
	break;	
	} 
    }
 }
  return 0;
}
