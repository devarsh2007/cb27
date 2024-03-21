// create a program that claculate
// add , sub , mul , div , min , max , equality

#include <stdio.h>
void main()
{
    int check=1;
    do
    {
        /* code */
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
        printf("\nenter 0 for exit");

        printf("\nenter your choise :");
        scanf("%d", &choise);

        if (choise > 7 )
        {
            printf("Invalid input");
        }

        if(choise==0)
        {
            check=0;
        }

        switch (choise)
        {
        case 1:
            printf("addition : %d", num1 + num2);
            break;

        case 2:
            printf("substraction : %d", num1 - num2);
            break;

        case 3:
            printf("substraction : %d", num1 * num2);
            break;

        case 4:
            printf("substraction : %d", num1 / num2);
            break;

        case 5:
            if (num1 < num2)
            {
                printf("%d is minimum", num1);
            }
            else if (num2 < num1)
            {
                printf("%d is minimum", num2);
            }
            else
            {
                printf("both are same");
            }
            break;

        case 6:
            if (num1 > num2)
            {
                printf("%d is maximum", num1);
            }
            else if (num2 > num1)
            {
                printf("%d is maximum", num2);
            }
            else
            {
                printf("both are same");
            }
            break;

        case 7:
            if (num1 == num2)
            {
                printf("both are same");
            }
            else
            {
                printf("both are not same");
            }
            break;
        }
        printf("\n-----------------------------------------------------------\n");

        if(choise==0)
        {
            printf("good bye....");
        }
    } while (check!=0);
}