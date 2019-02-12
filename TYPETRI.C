#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("Enter sides of triangle:\n");
   scanf("%d%d%d", &a,&b,&c);
   if(a==b && a==c)
   {
      printf("This is an equlateral triangle");
      }
   else
   { if(a==b || a==c)
      {
      printf("This is an isoceles triangle");

      }
     else
     {
     printf("This is a scalene triangle");
     }
   }
   getch();
   }