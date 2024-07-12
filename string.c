#include<stdio.h>
void main()
{
      char name[40];
      int count;

      printf("enter your name : ");
      for(int i=0;i<=39;i++)
      {
            scanf("%c",&name[i]);
            if(name[i]=='\n')
            {
                  break;
            }
      }

      for(int i=0;i<=39;i++)
      {
            printf("%c",name[i]);
            if(name[i]=='\n')
            {
                  break;
            }
      }

       for(int i=39;i>=0;i--)
      {
            // printf("%c",name[i]);
            if(name[i]=='\n')
            {
                  count=i;
            }
      }

       for(int i=count-1;i>=0;i--)
      {
            printf("%c",name[i]);
           
      }

}