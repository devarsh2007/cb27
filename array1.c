// write a program to accept 10 mark and display it
#include <stdio.h>
void main()
{
    int marks[5];

    // marks[0] = 50;
    // marks[1] = 30;
    // marks[2] = 40;
    // marks[3] = 10;
    // marks[4] = 30;
    // marks[0] = 100;

    // printf("%d %d",marks[0],marks[1]);

    for (int i=0;i<5;i++){

        int num;
        printf("enter mark%d :",i+1);
        scanf("%d",&num);
        marks[i] = num ;
    }

    for(int i=0;i<5;i++){
        printf("\nmark%d : %d",i+1,marks[i]);
    }
    // printf("\n%d",marks[1]);
    // printf("\n%d",marks[2]);
    // printf("\n%d",marks[3]);
    // printf("\n%d",marks[4]);

}