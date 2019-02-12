#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b;
  clrscr();
  printf("\nEnter the base no.:");
  scanf("%d", &a);
  printf("\nEnter the power of no.:");
  scanf("%d", &b);
  printf("\nHence result is %0.0f", pow(a,b));
  getch();
  }