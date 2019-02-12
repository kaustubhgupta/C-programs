#include<stdio.h>
#include<conio.h>
int per(int a);
int ranper(int a, int n);
void main()
{
  int b,c;
  clrscr();
  printf("Enter the range of perfect numbers:");
  scanf("%d%d", &b,&c);
  printf("List is:\n");
  ranper(b,c);
  getch();
  }
int per(int a)
{
  int i,b,sum=1;
  for(i=2;i<=a/2;i++)
  {
     b=a%i;
     if(b==0)
     sum=sum+i;
     }
  if(sum==a)
  return 1;
  else
  return 0;
  }
int ranper(int a, int n)
{
  int i;

  for(i=a;i<=n;i++)
  {
     if(per(i)==1)
      printf("%d\n",i);
      }
     return 0;
     }