// 5 x 1 = 5
// 5 x 2 =10

#include <stdio.h>
void main()
{
      int num;

      printf("enter number : ");
      scanf("%d", &num);

      for (int count = 1; count <= 10; count++)
      {
            printf("\n%d x %d = %d", num, count, num * count);
            printf("\n----------------------------------");
      }

      // count++;
      // printf("%d x %d = %d",num,count,num*count);

      // count++;
      // printf("%d x %d = %d",num,count,num*count);
}