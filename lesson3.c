#include <stdio.h>
void main()
{
    // factorial
    // 5 - 1*2*3*4*5

    int num=0;
    printf("enter number : ");
    scanf("%d",&num);

    int count = 1;

    for (int i = 1; i <= num; i++)
    {
        /* code */
        count = count * i;
    }

    // add=count+1;
    // count=count*add;

    printf("factorial of the number is %d", count);
}