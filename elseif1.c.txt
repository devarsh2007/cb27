// Write a programe to findout wehter the given alphabet is vowel or not
// a , e , i , o , u
#include <stdio.h>
void main()
{
     char letter = 'a';

     printf("Enter value of letter ");
     scanf("%c", &letter);

     if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
     {
          printf("It is vowel ");
     }
     else
     {
          printf("It is consonent ");
     }

     printf("\nGoodbyee...");
}
// Relational operators
// < , > , == , != , <= , >=

// Logical Opertaors
// && - and
// || - or