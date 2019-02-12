#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,*p,*q,t;
  clrscr();
  p=&a;
  q=&b;
  printf("Enter the values:\n");
  scanf("%d%d",p,q);
  t=*p;
  *p=*q;
  *q=t;
  printf("Swaped values are :\n%d\n%d",*p,*q);
  getch();
  return 0;
  }

