#include<stdio.h>
void main()
{int a,b,c;
printf("enter the number\n");
scanf("%d %d %d",&a,&b,&c);
if(a<b&&a<c){
    printf("enter %d",a);
} else if(b<a&&b<c) {
    printf("enter %d",b);
} else {
    printf("enter %d",c);
}
}