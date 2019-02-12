#include<stdio.h>
#include<conio.h>
void fibo(int n)
{
   int a[200],i;
   a[0]=0;
   a[1]=1;
   printf("%d\n",a[0]);
   printf("%d\n",a[1]);
    for(i=2;i<n;i++)
    {
      a[i]=a[i-1]+a[i-2];
      printf("%d\n",a[i]);
      }
  }
void main()
{
  int n;
  clrscr();
  printf("Enter the number upto which you want series:");
  scanf("%d",&n);
  fibo(n);
  getch();
  }