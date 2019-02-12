#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter any year:");
   scanf("%d", &a);
   if(a%4==0)
   {
     printf("It is a leap year");
     }
   else
   {
      printf("It is not a leap year");
      }

   getch();
   }