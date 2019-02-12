#include<stdio.h>
#include<conio.h>
void main()
{
  int sum=0,a,b,n;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  n=a;
  for(;a!=0;)
  {
    b=a%10;
    a=a/10;
    sum=sum + b*b*b;
    }
    if(sum==n)
    printf("It is an armstrong no");
    else
    printf("It is not an armstrong no");
    getch();
    }
