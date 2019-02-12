#include<stdio.h>
#include<conio.h>
void main()
{
   float a,b,c,d;
   clrscr();
   printf("Enter Principle:");
   scanf("%f", &a);
   printf("Enter Rate:");
   scanf("%f", &b);
   printf("Enter Time in years:");
   scanf("%f", &c);
   printf("Enter n:");
   scanf("%f", &d);
   printf("Hence,Simple inerest is %0.2f and compound interest is %0.2f",a*b*c/100,a*(1+b/d)*d*c);
   getch();
   }