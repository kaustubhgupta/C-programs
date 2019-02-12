#include<stdio.h>
#include<conio.h>
int lcm(int a, int b)
{
  int m,i,l;
  if(a>b)
  m=a;
  else
  m=b;
  for(;!l>0;)
  {
    if(m%a==0 && m%b==0)
    l=m;
    else
    m+=m;
    }
    return l;
}
int main()
{
  int a,b;
  clrscr();
  printf("Enter the two numbers:\n");
  scanf("%d%d",&a,&b);
  printf("LCM of numbers is: %d",lcm(a,b));
  getch();
  return 0;
  }