#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("\nEnter any no:");
   scanf("%d", &a);
   (a%5==0)?printf("It is divisible by 5"):(a%11==0)?printf("It is divisible by 11"):(a%5==0 && a%11==0)?printf("It is divisible by both 5 and 11"):printf("It is not divisible by both 5 and 11");
  getch();
  }