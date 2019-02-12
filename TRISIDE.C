#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,c;
  clrscr();
  printf("Enter first side:");
  scanf("%f", &a);
  printf("Enter second side:");
  scanf("%f", &b);
  printf("Enter third side:");
  scanf("%f", &c);
  (a<b+c && b<a+c && c<a+b)?printf("This is a valid triangle"):printf("This is  not a valid triangle");
  getch();
  }