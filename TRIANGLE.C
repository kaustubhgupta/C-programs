#include<stdio.h>
#include<conio.h>
void main()
{
   float a,b;
   clrscr();
   printf("\nEnter first angle:");
   scanf("%f", &a);
   printf("\nEnter second angle:");
   scanf("%f", &b);
   printf("\nTherefore third angle is %0.2f",(float)180-(a+b));
   getch();
   }