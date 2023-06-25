#include <stdio.h>
int main(){
int i,j,n;
printf("Enter n:\n");
scanf("%d",&n);
for(i=0;i<=2*n;i++){
if(i<=n){    
for(j=0;j<i;j++){    
printf("*");    
}
}
else if(i<2*n&&i>n){
for(j=2*n;j>i;j--){
printf("*");    
}       
}
printf("\n");
}    
return 0;
}
