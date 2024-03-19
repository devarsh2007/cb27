#include <stdio.h>
void main()
{
    // factorial
    // 5 - 1*2*3*4*5

    int num = 5;

    int count = 1;

    for (int i = 1; i <= num; i++)
    {
        /* code */
        // add = count + 1;
        count = count * (i+1);
    }

    // add=count+1;
    // count=count*add;

    printf("%d", count);
}