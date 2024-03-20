// Write a programe to print what day it is based on given number
#include <stdio.h>
void main()
{
     int day = 0;

     printf("Enter value of day ");
     scanf("%d", &day);

     switch (day)
     {
     case 1:
          printf("it is Monday ");
          break;

     case 2:
          printf("it is tuesday ");
          break;

     case 3:
          printf("it is wednesday ");
          break;

     case 4:
          printf("it is thursday ");
          break;

     case 5:
          printf("it is friday ");
          break;

     case 6:
          printf("it is saturday ");
          break;

     case 7:
          printf("it is sunday ");
          break;

     default:
          printf("Invalid day ");
          break;
     }

     printf("\nGoodbyee...");
}