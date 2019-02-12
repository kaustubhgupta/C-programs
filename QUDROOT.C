#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b,c,d,e,f;
  clrscr();
  printf("Enter values of a,b,c:\n");
  scanf("%d%d%d", &a,&b,&c);
  d=sqrt(pow(b,2)-(4*a*c));
  e=(-b)+(d)/(2*a);
  f=(-b)-(d)/(2*a);
  if(d>=0)
  {
  printf("Real roots %d and %d exist",e,f);
  }
  else
  { printf("No real roots exist");
  }
  getch();
  }

