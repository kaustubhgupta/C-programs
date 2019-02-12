#include<stdio.h>
#include<conio.h>
int evensum(int a)
{
  int i,s=0;
  for(i=1;i<=a;i++)
  {
     if(i%2==0)
     s+=i;
     }
     return s;
     }
int oddsum(int a)
{
  int i,s=0;
  for(i=1;i<=a;i++)
  {
     if(i%2!=0)
     s+=i;
     }
     return s;
     }
void main()
{
  int a;
  clrscr();
  printf("Enter number upto which you want sum of even and odd no:");
  scanf("%d", &a);
  printf("Even number sum is:%d",evensum(a));
  printf("\nOdd number sum is:%d",oddsum(a));
  getch();
  }