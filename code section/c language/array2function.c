#include <stdio.h>
void display(int *);
void main(){
int ary[]={10,2,7,4,2,9};
display(ary);
}
void display(int *x){
for(int i=0;i<6;i++){
printf("element=%d address=%u\n",*x,x);
x++;
}
}