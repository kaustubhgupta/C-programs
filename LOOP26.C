#include<stdio.h>
#include<conio.h>
void main()
{
  int i,a,sum[20];
  sum[0]=0;
  sum[1]=1;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  for(i=2;i<=a;i++)
  {
    sum[i]=sum[i-1]+sum[i-2];
    printf("%d\n", sum[i]);
    }
    getch();
    }