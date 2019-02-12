#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,sum=0;
  clrscr();
  printf("Enter a no:");
  scanf("%d", &a);
  for(;a!=0;)
  {
   b=a%10;
   sum=sum+b;
   a=a/10;
   }
   printf("Sum of digits is %d",sum);
   getch();
   }
