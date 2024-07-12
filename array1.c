#include<stdio.h>
void main()
{
      int number[5];

      for(int i=0;i<=4;i++)
      {
            printf("enter value : ");
            scanf("%d",&number[i]);

            // number[i] = 10;
      }
      // number[1] = 10;
      // number[2] = 20;
      // number[3] = 30;
      // number[4] = 140;

      for(int i=0;i<=4;i++)
      {
            printf("%d",number[i]);
      }
      // printf("%d",number);
}