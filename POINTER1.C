#include<stdio.h>
#include<conio.h>
int main()
{
  int a,*p;
  clrscr();
  p=&a;
  printf("Enter the number:");
  scanf("%d",p);
  printf("Address of variable: %u",p);
  getch();
  return 0;
  }