// Write a programe to findout zoidac sign of user
// -> month
// ->day
#include <stdio.h>
void main()
{
     int month = 0;
     int day = 0;

     printf("Enter value of month");
     scanf("%d", &month);
     printf("Enter value of day");
     scanf("%d", &day);

     if ((month == 3 && day >= 21 && day <= 31) || (month == 4 && day <= 19 && day > 0))
     {
          printf("Your zodiac sign is aries ");
     }
     else if ((month == 4 && day >= 20 && day <= 30) || (month == 5 && day <= 20 && day > 0))
     {
          printf("Your zodiac sign is taurus ");
     }
}

Write a programe to create a calc 
10 , 20  , option 
->addition
->subtraction
->multiplication
->division
->max
->min
->equality