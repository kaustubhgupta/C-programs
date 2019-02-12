#include<stdio.h>
#include<conio.h>
void main()
{
  int n,a[20],m=0,j;
  a[0]=0;
  clrscr();
  printf("Enter the range of no:");
  scanf("%d",&n);
  printf("Enter the numbers:");
  for(j=1;j<=n;j++)
  {
    scanf("%d",&a[j]);
    }
   for(j=1;j<=a[j];j++)
   {
     if(a[j]>m)
     m=a[j];
     else
     m=m;
     }
     printf("Max of numbers entered:%d",m);
     getch();
     }
