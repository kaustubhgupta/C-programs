#include<stdio.h>
#include<conio.h>
int arm(int a);
int ranarm(int a, int n);
void main()
{
  int b,c;
  clrscr();
  printf("Enter the range of armstrong:");
  scanf("%d%d", &b,&c);
  printf("List is:\n");
  ranarm(b,c);
  getch();
  }
int arm(int a)
{
  int sum=0,u,i,f,g;
  u=a;
  for(;a!=0;)
  {
    f=a%10;
    a=a/10;
    sum=sum+f*f*f;
    }
  if(sum==u)
  g=1;
  else
  g=0;
  return g;
  }
int ranarm(int a, int n)
{
  int i;

  for(i=a;i<=n;i++)
  {
     if(arm(i)==1)
      printf("%d\n",i);
      }
     return 0;
     }