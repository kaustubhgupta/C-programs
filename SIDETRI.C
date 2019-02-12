#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("Enter sides of traingle:\n");
   scanf("%d%d%d",&a,&b,&c);
   if(a<b+c && b<c+a && c<a+b)
   {
   printf("This is a valid triangle");
   }
   else
   {
   printf("This is not a valid triangle");
   }
   getch();
   }