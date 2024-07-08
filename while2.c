// 1,4,9,16....100

#include<stdio.h>
void main()
{
      int count=1;
      int number;

      printf("enter number : ");
      scanf("%d",&number);

      while(count<=number)
      {
            printf("%d ",count*count);
            count++;
      }
}