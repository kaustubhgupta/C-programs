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
     printf("It is a alphabet");
     }
   else
   {
      if(a>='0' && a<='9')
       {
	  printf("It is a digit");

       }
       else
       {
	  printf("It is a special character");

       }
      }

   getch();
   }