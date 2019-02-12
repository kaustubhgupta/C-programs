#include<stdio.h>
#include<conio.h>
void main()
{  int a;
   clrscr();
   printf("\nEnter no. of days:");
   scanf("%d",&a);
   printf("\nHence no. of year are %0.2f,no. of leap year are %0.2f and no. of weeks are %0.2f",(float)a/365,(float)a/366,(float)a/7);
   getch();
   }

