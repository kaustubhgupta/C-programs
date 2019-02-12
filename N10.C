#include<stdio.h>
#include<conio.h>
void main()
{
  float a,cost;
  clrscr();
  printf("Enter no. of calls:");
  scanf("%f", &a);
  if(a>=0 && a<=100)
  {
     cost=200;
     }
  else
  {
     if(a>100 && a<=150)
     {
       cost=200+0.6*(a-100);
       }
      else
      {
	 if(a>150 && a<=200)
	 {
	    cost=200+0.6*50+0.5*(a-150);
	    }
	  else
	  {   cost=200+0.6*50+0.5*50+0.4*(a-200);

	   }
      }
  }
  printf("Total telephone bill is:%0.2f",cost);
  getch();
  }