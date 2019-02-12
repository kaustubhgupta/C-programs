#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i;
  clrscr();
  printf("Enter a no:");
  scanf("%d", &a);
  for(i=1;i<=a;i++)
  {
    if(a%i==0)
    printf("It is a prime no.");
    }
   getch();
   }