#include<stdio.h>
int main(){
int length,breadth,area,perimeter;	
	printf("Enter the length and breadth\n");
	scanf("%d %d",&length ,&breadth);
	
	area=length*breadth;
	perimeter=2*(length+breadth);
	
	if(area>perimeter)
	{
		printf("Area is greater than perimeter");
	}
	else{
		printf("Perimeter is greater than area");
	}
	return 0;
}
