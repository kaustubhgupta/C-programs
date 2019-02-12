#include<stdio.h>
#include<conio.h>
int naturalnumbers(int a, int b);
void main()
{
  int a,b;
  clrscr();
  printf("Enter upper and lower values:\n");
  scanf("%d%d",&a,&b);
  printf("All numbers are:");
  naturalnumbers(a,b);
  getch();
  }
int naturalnumbers(int a,int b)
{
   int i;
   for(i=a;i<=b;i++)
    printf("%d ",i);

      return 0;

     }

