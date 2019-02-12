#include<stdio.h>
#include<conio.h>
void main()
{
  int a,f=1;
  clrscr();
  printf("Enter a no:");
  scanf("%d",&a);
  for(int i=a;i>=1;i--)
  {
    f=f*i;
    }
    printf("%d",f);
    getch();
    }