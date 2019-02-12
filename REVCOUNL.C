#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter value upto which you want series:");
  scanf("%d", &a);
  for( int i=a;i>=1;i--)
  {
    printf("\t%d",i);
    }
   getch();
   }