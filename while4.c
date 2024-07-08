// 0,1,1,2,3,5,8,13
// fibonaci series

#include <stdio.h>
void main()
{
      int a = 0;
      int b = 1;
      int c;

      printf("\n%d", a);
      printf("\n%d", b);

      c = a + b;

      while (c <= 13)
      {
            a = b;
            b = c;
            printf("\n%d", c);
            c = a + b;
      }

      // a=b;
      // b=c;
      // c=a+b;
      // printf("%d",c);
}