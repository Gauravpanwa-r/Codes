#include<stdio.h>
 circle(int);
int main(){
	int rad=1;
	float area;
    area =circle(rad);	
	printf("%f",area);
	return 0;
}
 circle(int r){
	float y;
	y=3.14*r*r;
	return (y);
}
