#include<stdio.h>
#include<conio.h>
int fac(int a)
{
 int i,k=1;
 for(i=a;i>=1;i--)
 {
   k=i*k;
   }
   return k;
   }
void main()
{
  int a;
  clrscr();
  printf("Enter the number:");
  scanf("%d",&a);
  printf("Its factorial is:%d",fac(a));
  getch();
  }
