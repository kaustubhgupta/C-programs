#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,b;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(i=1;i<=a;i++)
  {
    if(i%2==0)
    printf("\t%d",i);
    }
     getch();
     }