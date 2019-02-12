#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   clrscr();
   printf("Enter an alphabet:");
   scanf("%c", &a);
   if(a>='a' && a<='z')
   {
     printf("It is an lower case character");
     }
   else
   {
      if(a>='A' && a<='Z')
      {
       printf("It is a upper case character");
      }
      else
      {
       printf("This not a valid input");
      }
      }

   getch();
   }