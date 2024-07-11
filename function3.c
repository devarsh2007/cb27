// write a function that find circle area
#include<stdio.h>
// without argument with return value
float getpi()
{
      return 3.14159265359;
}

void main()
{
      float r,area,pi;

      printf("enter radius : ");
      scanf("%f",&r);

      pi = getpi();

      area = pi*r*r;

      printf("area of circle : %f",area);

}