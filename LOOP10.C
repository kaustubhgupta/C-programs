#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,count=0;
  int b;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(;a!=0;)
  {
    b=(a)%(10);
    a=a/10;
    count++;
    }
    printf("%d",count);
     getch();
     }