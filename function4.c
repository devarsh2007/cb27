#include<stdio.h>

// with argument with return value function

float getarea(float r,float h )
{
      return ((2*3.1415*r*h)+(2*3.1415*r*r));
}

void main()
{
      float r,h;
      r=100;
      h=20.6;

      printf("%f",getarea(r,h));
}