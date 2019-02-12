#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  int count=0;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  for(;a!=0;count++)
  {
    b=a%10;
    a=a/10;
    }
    printf("%d is no of digits",count);
    getch();
    }