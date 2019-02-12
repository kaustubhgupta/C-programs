#include<stdio.h>
#include<conio.H>
void main()
{
  int a;
  clrscr();
  printf("Enter no. of your choice:");
  scanf("%d", &a);
  switch(a%2==0)
  {
     case 1:printf("It is even no.");
     break;
     case 0:printf("It is odd no.");
     break;
     }
  getch();
  }

