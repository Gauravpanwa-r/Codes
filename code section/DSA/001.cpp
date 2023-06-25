# include <stdio.h>
#include <math.h>
#define MAX(X,Y) (((X)<(Y))?(X):(Y)) 

int main() {
	float a=5,b=9;
	printf("%f\n%f\n%f\n",a,b,MAX(a,b));
}
