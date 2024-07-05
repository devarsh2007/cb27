// find minimum number
#include <stdio.h>
void main()
{
      int a, b, c;
      printf("enter a : ");
      scanf("%d", &a);

      printf("enter b : ");
      scanf("%d", &b);

      printf("enter c : ");
      scanf("%d", &c);

      // a=2,b=2,c=1

      if (a < b)
      {
            if (a < c)
            {
                  printf("a is minimum");
            }
      }

      else if (b < a)
      {
            if (b < c)
            {
                  printf("b is minimum");
            }
      }

      else if (c < a)
      {
            if (c < b)
            {
                  printf("c is minimum");
            }
      }
}