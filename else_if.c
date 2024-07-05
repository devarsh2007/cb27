// write a progarm that check number is positive,negetive or zero

#include <stdio.h>
void main()
{
      int num;

      printf("enter a number : ");
      scanf("%d", &num);

      if (num > 0)
      {
            printf("number is positive");
      }
      else if (num < 0)
      {
            printf("number is negetive");
      }
      else
      {
            printf("number is zero");
      }
}
