// write a function that find bmi 
// with argument without return value

#include<stdio.h>

void bmi(float w,float h)
{
      float answer;
      h = h/100;
      answer = w / (h*h);
      printf("your bmi : %f",answer);

      if(answer<=18.5)
      {
            printf("\nstatus : you are underweight ");
      }
      else if (answer>18.5 && answer<=24.9)
      {
            printf("\nstatus : you are normalweight");
      }
      else if (answer>24.9 && answer<30)
      {
            printf("\nstatus : you are overweight");
      }
      else{
            printf("\nstatus : obesity...");
      }
      
}

void main()
{
      float weight,height;

      printf("enter weight : ");
      scanf("%f",&weight);

      printf("enter height : ");
      scanf("%f",&height);

      bmi(weight,height);
}