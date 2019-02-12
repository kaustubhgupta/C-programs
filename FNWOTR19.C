#include<stdio.h>
#include<conio.h>
void hcf(int a, int b)
{
  int c;
  for(;c!=0;)
  {
    c=b%a;
    if(c==0)
    printf("HCF of numbers is:%d",a);
    else
    b=a;
    a=c;
	}
}
void main()
{
  int a,b;
  clrscr();
  printf("Enter the two numbers(smaller one first):");
  scanf("%d%d",&a,&b);
  hcf(a,b);
  getch();
  }
