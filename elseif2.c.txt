// Write a programe to findout how many days the given month has
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
     {
          printf("this month has 31 days ");
     }
     else if (month == 2)
     {
          printf("This month has 28 or 29 days ");
     }
     else if (month == 4 || month == 6 || month == 9 || month == 11)
     {
          printf("This month has 30 days ");
     }
     else
     {
          printf("Invalid Month ");
     }

     printf("\nGoodbyee...");
}