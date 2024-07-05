#include <stdio.h>
void main()
{
      int choice, a, b;
      printf("\n1 -> addition\n2 -> subtraction\n3 -> multiplication\n4 -> divison");

      printf("\nenter your choice : ");
      scanf("%d", &choice);

      switch (choice)
      {
      case 1:
            printf("enter a : ");
            scanf("%d", &a);

            printf("enter b : ");
            scanf("%d", &b);
            printf("addition : %d", a + b);
            break;

      case 2:
            printf("enter a : ");
            scanf("%d", &a);

            printf("enter b : ");
            scanf("%d", &b);
            printf("subtraction : %d", a - b);
            break;

      case 3:
            printf("enter a : ");
            scanf("%d", &a);

            printf("enter b : ");
            scanf("%d", &b);
            printf("multiplication : %d", a * b);
            break;

      case 4:
            printf("enter a : ");
            scanf("%d", &a);

            printf("enter b : ");
            scanf("%d", &b);
            printf("division : %d", a / b);
            break;

      default:
            printf("invalid input");
            break;
      }
}