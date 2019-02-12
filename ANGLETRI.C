#include<stdio.h>
#include<conio.h>
void main()
{

  int a,b,c,t;
  clrscr();
  printf("Enter angles of triangle:\n");
  scanf("%d%d%d", &a,&b,&c);
  t=a+b+c;
  if(t==180)
  {
     printf("This is a valid triangle");
     }
  else
  {  printf("This is not a valid triangle");
  }
  getch();
  }
