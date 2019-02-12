#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   clrscr();
   printf("\nEnter any char:");
   scanf("%c", &a);
   (a>='A'&& a<='Z' || a>='a' && a<='z')?printf("It is a character"):printf("It is not a charater");
  getch();
  }
