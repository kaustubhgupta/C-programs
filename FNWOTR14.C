#include<stdio.h>
#include<conio.h>
int revnum(int a)
{
   int i,b=0;
   for(;a!=0;)
   {
      b=b*10+a%10;
      a=a/10;
      }
      return b;
      }
void main()
{
  int a;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&a);
  printf("Reverse of the number is :%d",revnum(a));
  getch();
  }