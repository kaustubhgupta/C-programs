#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,multi=1;
  clrscr();
  printf("Enter a no:");
  scanf("%d", &a);
  for(;a!=0;)
  {
   b=a%10;
   multi=multi*b;
   a=a/10;
   }
   printf("Product of digits is %d",multi);
   getch();
   }