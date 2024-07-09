// 1
// 22
// 333
// 4444

#include <stdio.h>
void main()
{
      int count=0;

     for(int j=1;j<=8;j++)
     {
       count++;
       for(int i=1;i<=j;i++)
      {
      printf("%d ", count);
      }
      printf("\n");
      printf("---------------------");
      printf("\n");
     }

      // count++;
      // for(int i=1;i<=2;i++)
      // {
      // printf("%d", count);
      // }
      // printf("\n");

      // count++;
      // for(int i=1;i<=3;i++)
      // {
      // printf("%d", count);
      // }
      // printf("\n");

      // count++;
      //  for(int i=1;i<=4;i++)
      // {
      // printf("%d", count);
      // }
      // printf("\n");
}