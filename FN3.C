#include<stdio.h>
#include<conio.h>
int max(int a, int b);
int min(int a, int b);
void main()
{
   int c,d;
   clrscr();
   printf("Enter the two no:\n");
   scanf("%d%d", &c,&d);
   max(c,d);
   printf("\n");
   min(c,d);
   getch();
   }
int max(int a, int b)
{
   if(a>b)
   printf("Max is %d",a);
   else
   printf("Max is %d",b);
   return 0;
   }
int min(int a, int b)
{
   if(a>b)
   printf("Min is %d",b);
   else
   printf("Min is %d",a);
   return 0;
   }