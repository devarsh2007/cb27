// 1
// 12
// 123
// 1234

#include <stdio.h>
void main()
{
      int count;

      for (int j = 1; j <= 4; j++)
      {
            for (count = 1; count <= j; count++)
            {
                  printf("%d ", count);
            }
            printf("\n");
            printf("--------------------------\n");
      }

      // for (count = 1; count <= 2; count++)
      // {
      //       printf("%d", count);
      // }
      // printf("\n");

      // for (count = 1; count <= 3; count++)
      // {
      //       printf("%d", count);
      // }
      // printf("\n");

      // for (count = 1; count <= 4; count++)
      // {
      //       printf("%d", count);
      // }
      // printf("\n");
}