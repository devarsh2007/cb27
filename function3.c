// write a program that do substraction between 2 numbers
// answer should be positive

#include <stdio.h>

void sub(int a,int b)
{

    if(a > b){
        printf("positive substraction : %d ",a-b);
    }

    else if(b>a)
    {
        printf("positive substraction : %d ",b-a);
    }

    else{
        printf("substraction is not possible....");
    }

}

void main()
{

    int num1=0;
    int num2=0;

    printf("\nenter number 1 :");
    scanf("%d",&num1);

    printf("\nenter number 2 :");
    scanf("%d",&num2);


    sub(num1,num2);

}