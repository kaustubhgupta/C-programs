#include<stdio.h>
#include<conio.h>
void main()
{
  float a;
  clrscr();
  printf("Enter a no:");
  scanf("%f",&a);
  if(a>0)
  {
    printf("It is positive");

    }
  else
  {
    if(a<0)
    {
       printf("It is negative");
    }
    else
    {
       printf("It is zero");
    }
  }
  getch();
  }