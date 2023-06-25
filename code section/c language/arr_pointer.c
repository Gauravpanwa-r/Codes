#include <stdio.h>
void main(){
int num[]={5,3,7,2,7,3,8,0,5};
int *j,i;
j=&num[0];
for(i=0;i<9;i++){
printf("Adress=%u and number=%d\n",j,*j);
j++;
}
}