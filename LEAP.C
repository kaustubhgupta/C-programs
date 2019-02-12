#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("\nEnter any year:");
   scanf("%d", &a);
   (a%4==0)?printf("It is leap year"):printf("It is not a leap year");
  getch();
  }
