#include<stdio.h>
#include<conio.h>
int cube(int a);
void main()
{
   int b;
   clrscr();
   printf("Enter the no:");
   scanf("%d",&b);
   printf("It's cube is:%d",cube(b));
   getch();
   }
int cube(int a)
{
    int i,k=1;
    for(i=0;i<3;i++)
    {
      k=k*a;
      }
      return k;
      }





