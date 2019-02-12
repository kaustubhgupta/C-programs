#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,b;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  for(i=2;i<=a/2;i++)
  {
    b=a%i;
    if(b==0)
    printf("%d ",i);
    }
    getch();
    }
