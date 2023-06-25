#include <stdio.h>
void display(int);
int main(){
int arr[10];
for(int i=0;i<10;i++){
printf("Enter value of element %d\n",i+1);
scanf("%d",&arr[i]);
}
for(int i=0;i<10;i++){
display(arr[i]);

}
return 0;
}
void display(int a){
printf("%d\n",a);
}