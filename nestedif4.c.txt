//     January - 31 days
//         February - 28 days in a common year and 29 days in leap years
//     March - 31 days
//     April - 30 days
//     May - 31 days
//     June - 30 days
//     July - 31 days
//     August - 31 days
//     September - 30 days
//     October - 31 days
//     November - 30 days
//     December - 31 days
// Write a programe to findout how many days the given month has without and or and else if
#include <stdio.h>
void main()
{
     int month = 0;

     printf("Enter value of month ");
     scanf("%d", &month);

     if (month < 12)
     {
          if (month > 0)
          {
               if (month <= 7)
               {
                    // 7 smaller
                    if (month == 2)
                    {
                         printf("This month has 28 or 29 days ");
                    }
                    else
                    {
                         if (month % 2 == 0)
                         {
                              printf("This month has 30 days ");
                         }
                         else
                         {
                              printf("This month has 31 days ");
                         }
                    }
               }
               else
               {
                    // 7 greater
                    if (month % 2 == 0)
                    {
                         printf("This month has 31 days ");
                    }
                    else
                    {
                         printf("This month has 30 days ");
                    }
               }
          }
          else
          {
               printf("Invalid month ");
          }
     }
     else
     {
          printf("Invalid month ");
     }
}
