#include <stdio.h>
#include <stdlib.h>
int main()
{
    struct rectangle
    {
        int length;
        int breadth;
        int area;
    };
    struct rectangle *p;
    p = (struct reactangle *)malloc(sizeof(int));
    p->length = 10;
    int a = p->length;
    p->breadth = 20;
    int b = p->breadth;
    printf("Area of rectangle is %d",a*b);
}