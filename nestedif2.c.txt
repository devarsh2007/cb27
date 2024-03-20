// Write a programe to findout greastest number outof given 3 numbers
#include <stdio.h>
void main()
{
     int number1 = 0;
     int number2 = 0;
     int number3 = 0;

     printf("Enter value of number 1 ");
     scanf("%d", &number1);
     printf("Enter value of number 2 ");
     scanf("%d", &number2);
     printf("Enter value of number 3 ");
     scanf("%d", &number3);

     if (number1 == number2 && number2 == number3)
     {
          printf("All are same");
     }
     else
     {
          if (number1 > number2)
          {
               if (number1 > number3)
               {
                    printf("Number 1 is greater ");
               }
               else
               {
                    printf("Number 3 is greater ");
               }
          }
          else
          {
               if (number2 > number3)
               {
                    printf("Number 2 is greater ");
               }
               else
               {
                    printf("Number 3 is greater ");
               }
          }
     }

     printf("\nGoodbyee..");
}