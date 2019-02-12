#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,c,d,e,f,g;
  clrscr();
  printf("Enter marks of subject 1:");
  scanf("%f", &a);
   printf("Enter marks of subject 2:");
  scanf("%f", &b);
   printf("Enter marks of subject 3:");
  scanf("%f", &c);
   printf("Enter marks of subject 4:");
  scanf("%f", &d);
   printf("Enter marks of subject 5:");
  scanf("%f", &e);
  f=a+b+c+d+e;
  g=f/5;
  printf("Hence total marks are %0.2f and percentage is %0.2f", f,g);
  getch();
  }