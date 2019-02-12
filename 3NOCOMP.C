#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("\nEnter first no:");
   scanf("%d", &a);
   printf("\nEnter second no:");
   scanf("%d", &b);
   printf("\nEnter third no:");
   scanf("%d", &c);
   (a>b && a>c)?printf("%d is the greatest",a):(b>a && b>c)?printf("%d is the greatest",b):printf("%d is the greatest",c);
  getch();
  }
