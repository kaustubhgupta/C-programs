#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,m;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(i=1;i<=10;i++)
  {
    m=a*i;
    printf("\n%dx%d=%d",a,i,m);
    }
     getch();
     }