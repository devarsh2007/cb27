// Write a programe to findout wether the given alphabet is vowel or not
#include <stdio.h>
void main()
{
     char alphabet = ' ';

     printf("Enter any alphabet ");
     scanf("%c", &alphabet);

     switch (alphabet)
     {
     case 'a':
          printf("It is vowel ");
          break;

     case 'e':
          printf("It is vowel ");
          break;

     case 'i':
          printf("It is vowel ");
          break;

     case 'o':
          printf("It is vowel ");
          break;

     case 'u':
          printf("It is vowel ");
          break;

     case 'A':
          printf("It is vowel ");
          break;

     case 'E':
          printf("It is vowel ");
          break;

     case 'I':
          printf("It is vowel");
          break;

     case 'O':
          printf("It is vowel ");
          break;

     case 'U':
          printf("It is vowel ");
          break;

     default:
          printf("It is consonent");
          break;
     }

     printf("\nGoodbyee...");
}