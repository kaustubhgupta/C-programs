#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  c=a%10;
  for(;a!=0;)
  {
    b=a%10;
    a=a/10;
    }
    printf("%d is the sum of first digit and last digit",b+c);
    getch();
    }