#include <stdio.h>

int main()
{
    float length, breadth ;
    
    printf("ENTER LENGHT:");
    scanf("%f", &length);

    printf("ENTER BREADTH:");
    scanf("%f", &breadth);

    float area=length*breadth;
    printf("AREA OF RECTANGLE IS %f",area);

    return 0;
}
