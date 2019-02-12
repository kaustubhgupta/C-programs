#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(i=a;i>=1;i--)
  {
    printf("\t%d",i);
    }
     getch();
     }