// create a program that claculate
// add , sub , mul , div , min , max , equality

#include <stdio.h>
void main()
{
    int num1;
    int num2;
    int choise;
    printf("enter number 1 :");
    scanf("%d", &num1);

    printf("enter number 2 :");
    scanf("%d", &num2);

    printf("\nenter 1 for addition");
    printf("\nenter 2 for substraction");
    printf("\nenter 3 for multiplication");
    printf("\nenter 4 for divison");
    printf("\nenter 5 for minmum number");
    printf("\nenter 6 for maximum number");
    printf("\nenter 7 for check equality");

    printf("\nenter your choise :");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        printf("addition : %d", num1 + num2);
        break;

    case 2:
        printf("substraction : %d",num1-num2);
        break;

    case 3:
        printf("substraction : %d",num1*num2);
        break;

    case 4:
        printf("substraction : %d",num1/num2);
        break;
    }
}