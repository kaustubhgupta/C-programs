#include<stdio.h>
#include<conio.h>
void main()
{
  float a,cost,t;
  clrscr();
  printf("Enter no of units consumed:");
  scanf("%f", &a);
  if(a>=0 && a<50)
  {
    cost=(a)*(0.5);
  }
  else
  {
    if(a>=50 && a<150)
    {
     cost=(50)*(0.5)+(a-50)*(0.75);
    }
    else
    {
      if(a>=150 && a<250)
      {
	cost=(50)*(0.5)+(100)*(0.75)+(a-150);
      }
      else
      {
	cost=(50)*(0.5)+(100)*(0.75)+(100)*(1.2)+(a-250)*(1.5);
       }
     }
  }
   t=cost+(cost)/(5);
   printf("Therefore bill amount is %0.2f\n Additional surcharge is %0.2f\n Total bill is %0.2f",cost,cost/5,t);
      getch();
   }







