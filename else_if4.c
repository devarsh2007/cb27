// write a program that check latter is vowel,consonate

#include <stdio.h>
void main()
{
      char latter;

      printf("enter a latter : ");
      scanf("%c", &latter);

      // printf("%c",latter);

      if (latter == 'a' || latter == 'e' || latter == 'i' || latter == 'o' || latter == 'u' || latter == 'A' || latter == 'E' || latter == 'I' || latter == 'O' || latter == 'U')
      {
            printf("It is a vowel");
      }

      else if (latter == 'b' || latter == 'c' || latter == 'd' || latter == 'f' || latter == 'g' ||
               latter == 'h' || latter == 'j' || latter == 'k' || latter == 'l' || latter == 'm' ||
               latter == 'n' || latter == 'p' || latter == 'q' || latter == 'r' || latter == 's' ||
               latter == 't' || latter == 'v' || latter == 'w' || latter == 'x' || latter == 'y' ||
               latter == 'z' ||
               latter == 'B' || latter == 'C' || latter == 'D' || latter == 'F' || latter == 'G' ||
               latter == 'H' || latter == 'J' || latter == 'K' || latter == 'L' || latter == 'M' ||
               latter == 'N' || latter == 'P' || latter == 'Q' || latter == 'R' || latter == 'S' ||
               latter == 'T' || latter == 'V' || latter == 'W' || latter == 'X' || latter == 'Y' ||
               latter == 'Z')

      {
            printf("it is consonate");
      }

      else
      {
            printf("invalid input");
      }
}