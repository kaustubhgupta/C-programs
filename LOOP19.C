#include<stdio.h>
#include<conio.h>
void main()
{
  int a,p,i=1;
  clrscr();
  printf("Enter base and power:\n");
  scanf("%d%d", &a,&p);
  for(int c=1;c<=p;c++)
  {
    i=i*a;
    }
    printf("%d",i);
    getch();
    }