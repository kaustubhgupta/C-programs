#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  clrscr();
  printf("Enter the character:");
  scanf("%c", &a);
  if(a>=0 && a<=0)
  {
   printf("This is a digit");
  }
  else
  {
    if(a>='a' && a<='z' || a>='A' && a<='Z')
    {
     printf("This is a alphabet");
     }
     else
     {
       printf("This is a special character");
      }
  }
  getch();
  }