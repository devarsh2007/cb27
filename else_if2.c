// write a program that check max number between 3 numers

#include<stdio.h>
void main()
{
      int a,b,c;

      printf("enter a: ");
      scanf("%d",&a);

      printf("enter b: ");
      scanf("%d",&b);

      printf("enter c: ");
      scanf("%d",&c);

      if(a>b && a>c)
      {
            printf("a is max");
      }
      else if(b>a && b>c)
      {
            printf("b is max");
      }
      else if(c>a && c>b)
      {
            printf("c is max");
      }

      else if(b==c && b>a)
      {
            printf("b and c are max");
      }
      else if(a==c && a>b)
      {
            printf("a and c are max");
      }
      else if(b==a && b>c)
      {
            printf("b and a are max");
      }

      else
      {
            printf("all are same");
      }


}