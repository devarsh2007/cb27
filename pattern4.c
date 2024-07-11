// a
// ab
// abc
// abcd

#include <stdio.h>
void main()
{
      int count = 97;

      for (int j = 1; j <= 26; j++)
      {
            count = 97;
            for (int i = 1; i <= j; i++)
            {
                  printf("%c ", count);
                  count++;
            }
            printf("\n");
      }

      // count = 97;
      // for (int i = 1; i <= 2; i++)
      // {
      //       printf("%c ", count);
      //       count++;
      // }
      // printf("\n");

      // count = 97;
      // for (int i = 1; i <= 3; i++)
      // {
      //       printf("%c ", count);
      //       count++;
      // }
      // printf("\n");

      // count = 97;
      // for (int i = 1; i <= 4; i++)
      // {
      //       printf("%c ", count);
      //       count++;
      // }
      // printf("\n");
}
