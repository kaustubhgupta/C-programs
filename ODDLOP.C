#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  for( int i=1;i<=100;i++)
  {
    if(i%2==1)
    printf("\t%d",i);
    else
    printf("");
    }
   getch();
   }