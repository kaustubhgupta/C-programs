#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a[200];
   int i,d=1;
   clrscr();
   printf("Enter the whole string:");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
      if(a[i]==' ')
      d++;
      }
   printf("No of words are %d",d);
   getch();
   }