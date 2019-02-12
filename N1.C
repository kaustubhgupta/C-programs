#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("Enter the two no (Greater First):\n");
  scanf("%d%d", &a,&b);
  while(c!=0)
  {
    c=a%b;
    if(c==0)
    printf("HCF of numbers entered is:%d",b);
    else
    a=b;
    b=c;
    }
    getch();
    }