// 1 - one , 2 - two , 3 - three

#include<stdio.h>
void main()
{
 int num;
      printf("enter number : ");
      scanf("%d",&num);

      if(num==0)
      {
            printf("zero");
      }
      else if(num==1)
      {
            printf("one");
      }
      else if(num==2)
      {
            printf("two");
      }
      else if(num==3)
      {
            printf("three");
      }
      else if(num==4)
      {
            printf("four");
      }
      else if(num==5)
      {
            printf("five");
      }

      else
      {
            printf("invalid input");
      }
}