#include<stdio.h>
#include<conio.h>
int sumnum(int a)
{
  int b,i,sum=0;
  for(;a!=0;)
  {
    b=a%10;
    a=a/10;
    sum+=b;
    }
    return sum;
    }
void main()
{
  int a;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&a);
  printf("Summ of the digits:%d",sumnum(a));
  getch();
  }