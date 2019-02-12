#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   clrscr();
   printf("\nEnter any no:");
   scanf("%c", &a);
   (a='a','e','i','o','u')?printf("It is vowel"):printf("It is consonant");
  getch();
  }