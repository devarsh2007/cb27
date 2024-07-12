#include<stdio.h>
void main()
{
      struct student
      {
            // char name[40];
            int roll;
            int age;
            float marks;
      };

      // structure object
      struct student s1={20,11,88.48};

      // s1.roll = 20;
      // s1.age = 13;
      // s1.marks = 99.99;

      // printf("enter your name : ");
      // for(int i=0;i<=39;i++)
      // {
      //       scanf("%c",&s1.name[i]);
      //       if(s1.name[i]=='\n')
      //       {
      //             break;
      //       }


      // }

      
      printf("\n%d",s1.roll);
      printf("\n%d",s1.age);
      printf("\n%.2f\n",s1.marks);

      
      // for(int i=0;i<=39;i++)
      // {
      //       printf("%c",s1.name[i]);
      //       if(s1.name[i]=='\n')
      //       {
      //             break;
      //       }
      // }



}