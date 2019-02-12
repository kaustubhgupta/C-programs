#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(i=1;i<=a;i++)
  {
    if(i%2==1)
    printf("\t%d",i);
    }
     getch();
     }