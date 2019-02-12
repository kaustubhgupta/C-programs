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
    printf("%d is first digit and %d is last digit",b,c);
    getch();
    }