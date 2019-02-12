#include<stdio.h>
#include<conio.h>
int main()
{
  int a,b,*p,*q;
  clrscr();
  p=&a;
  q=&b;
  printf("Enter the two numbers:\n");
  scanf("%d%d",p,q);
  printf("Additon of the numbers is: %d",*p+*q);
  getch();
  return 0;
  }