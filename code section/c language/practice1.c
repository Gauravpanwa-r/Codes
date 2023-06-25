#include <stdio.h>
int main(){
    int c=0,num,data[25];
    for(int i=0;i<25;i++){
    printf("Enter data %d\n",i+1);
    scanf("%d",&data[i]);
    }
    printf("Enter the number that's frequency you want to check\n");
    scanf("%d",&num);
    for(int i=0;i<25;i++){
    if(num==data[i]){
    printf("%d\n",num); 
    c=1;   
    }
    
    }
    if(c!=1)
    printf("The entered number is not present in data\n"); 
    return 0;
}