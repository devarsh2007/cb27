// write a program that calculate area of circle
// pi *( r * r)

#include <stdio.h>

float getpi(){
    return 3.14159265359;
}

int getarea(int r)
{
    return r*r;
}

void main()
{
    int r;
    printf("enter radius : ");
    scanf("%d",&r);

    printf("area of circle (radius = %d): %f",r,getarea(r)*getpi());
}