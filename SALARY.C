#include<stdio.h>
#include<conio.h>
void main()
{
  float a,n;
  clrscr();
  printf("\nEnter your basic salary:");
  scanf("%f", &a);
  if(a>=0 && a<=10000)
  {
    n=(a)+(a)/(5)+(a)*(0.8);
  }
  else
  {
    if(a>10000 && a<=20000)
    {
     n=(a)+(a)*(0.25)+(a)*(0.9);
    }
    else
    {
     n=(a)+(a)*(0.3)+(a)*(0.95);
    }
  }
    printf("Hence your gross salary is: %0.2f",(float)n);
  getch();
  }