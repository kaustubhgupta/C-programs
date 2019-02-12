#include<stdio.h>
#include<conio.h>
int sum(int a)
{
  int i,s=0;
  for(i=1;i<=a;i++)
  s+=i;
  return s;
  }
void main()
{
  int a;
  clrscr();
  printf("Enter number upto which you want sum  of natural numbers:");
  scanf("%d",&a);
  printf("Sum is %d",sum(a));
  getch();
  }