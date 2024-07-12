#include <stdio.h>
void main()
{
      int marks[5][3];

      for (int j = 0; j <= 4; j++)
      {
            printf("\nstudent %d",j+1);
            printf("\n------------------------\n");
            for (int i = 0; i <= 2; i++)
            {
                  // marks[j][i] = 100;
                  printf("enter marks%d : ",i+1);
                  scanf("%d",&marks[j][i]);
            }
      }

      for (int j = 0; j <= 4; j++)
      {
            printf("\n\nmarks of student%d ",j+1);
            printf("\n-------------------------------------\n");
            for (int i = 0; i <= 2; i++)
            {
                  printf("marks%d : ",i+1);
                  // marks[j][i] = 100;
                  // printf("enter marks : ");
                  printf("%d ",marks[j][i]);
            }
      }
}