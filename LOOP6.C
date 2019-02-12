#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,sum=0;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(i=1;i<=a;i++)
  {
    sum=sum+i;
    }
    printf("%d",sum);
     getch();
     }