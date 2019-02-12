#include<stdio.h>
#include<conio.h>
int even_odd_check(int*q)
{
  if(*q%2==0)
  return 1;
  else
  return 0;
  }
void main()
{
  int b,*p;
  clrscr();
  p=&b;
  printf("Enter the number:");
  scanf("%d",p);
  if(even_odd_check(p)==1)
  printf("It is even");
  if(even_odd_check(p)==0)
  printf("It is odd");
  getch();
  }



