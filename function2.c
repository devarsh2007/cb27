<<<<<<< HEAD
// write a program to print symbol.
#include <stdio.h>

void printstar(char sy , int num)
{
    for(int i=1 ; i<=num ; i++)
    {
        printf("%c\n",sy);
    }
}

void main()
{
    char symbol=' ';
    int num=0;

    printf("\nenter symbol : ");
    scanf("%c",&symbol);

    printf("\nenter size of symbol : ");
    scanf("%d",&num);

    printstar(symbol , num);
}
=======
// write a program to print symbol.
#include <stdio.h>

void printstar(char sy , int num)
{
    for(int i=1 ; i<=num ; i++)
    {
        printf("%c\n",sy);
    }
}

void main()
{
    char symbol=' ';
    int num=0;

    printf("\nenter symbol : ");
    scanf("%c",&symbol);

    printf("\nenter size of symbol : ");
    scanf("%d",&num);

    printstar(symbol , num);
}
>>>>>>> 8fb1a367b09dceaceda62db3aba42823c30cccea
