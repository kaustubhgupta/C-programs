#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   printf("\nEnter first no:");
   scanf("%d", &a);
   printf("Enter second no:");
   scanf("%d", &b);
   (a>b)?printf("%d is greater than %d",a,b):printf("%d is greater than %d",b,a);

  getch();
  }
