#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("\nEnter temperature in Celsius:");
  scanf("%d", &a);
  printf("\nTherefore temperature in Farenheit is %0.2f",(float)9/5*a+32);
  getch();
  }
