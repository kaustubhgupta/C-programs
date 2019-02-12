#include<stdio.h>
#include<conio.h>
int hcf(int a, int b)
{
  int c,k;
  for(;c!=0;)
  {
    c=b%a;
    if(c==0)
     k=a;
      else
      {
      b=a;
      a=c;
      }
   }
   return k;
}

int lcm(int a,int b)
{
  return((a*b)/hcf(a,b));
  }

void main()
{
  int a,b;
  clrscr();
  printf("Enter the valeues:");
  scanf("%d%d",&a,&b);
  if(a<b)
  printf("LCM is:%d",lcm(a,b));
  else
  printf("LCM is:%d",lcm(b,a));
  getch();
  }
