#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  if(a>0)
  printf("It's absolute value is:%d",a);
  else
  {
   if(a<0)
   { b=-a;
   printf("It's absolute vale is:%d",b);
   }
   else
   printf("It's absolute value is zero");
  }
  getch();
  }
