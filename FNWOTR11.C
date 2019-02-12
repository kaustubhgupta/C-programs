#include<stdio.h>
#include<conio.h>
void evenonly(int a, int b);
void oddonly(int a, int b);
void main()
{
 int a,b;
 clrscr();
 printf("Enter the values upper and lower values:\n");
 scanf("%d%d",&a,&b);
 printf("Even numbers are :\n");
 evenonly(a,b);
 printf("\nOdd numbers are :\n");
 oddonly(a,b);
 getch();
 }
void evenonly(int a, int b)
{
   int i;
   for(i=a;i<=b;i++)
   {
      if(i%2==0)
      printf("%d ",i);
		  }
   }
void oddonly(int a, int b)
{
   int i;
   for(i=a;i<=b;i++)
   {
      if(i%2!=0)
      printf("%d ",i);
		  }
   }

