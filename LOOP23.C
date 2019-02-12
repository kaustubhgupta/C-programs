#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i,p,j;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  for(j=1;j<=a;j++)
  {
  for(i=2;i<=a/2;i++)
  {
    b=a%i;
    if(b==0)
    printf("");
    else
    printf("%d",i);
    }
    }
    getch();
    }