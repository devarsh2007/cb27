// factorial

#include<stdio.h>
void main()
{
      int num,ans=1;

      printf("enter number : ");
      scanf("%d",&num);

      for(int i=1;i<=num;i++)
      {
            ans=i*ans;
            
      }
      printf("%d",ans);

}