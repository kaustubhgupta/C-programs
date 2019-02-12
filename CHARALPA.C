#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   clrscr();
   printf("Enter any character:");
   scanf("%c", &a);
   if(a>='a' && a<='z'||a>='A' && a<='Z')
   {
     printf("This is a character");

   }
   else
   {
     printf("This is not a character");

    }
   getch();
   }