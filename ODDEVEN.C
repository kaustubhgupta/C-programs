#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter any no:");
   scanf("%d", &a);
   if(a%2==0)
   {
     printf("It is an even no");
     }
   else
   {
      printf("It is a odd no");
      }

   getch();
   }