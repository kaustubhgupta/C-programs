#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[20],b,c;
  int i;
  clrscr();
  printf("Enter the string:");
  gets(a);
  printf("Enter the character which you want to replace:");
  b=getchar();
  getchar();
  printf("Enter the character which you want:");
  c=getchar();
  printf("New string is:");
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==b)
    a[i]=c;
	  }
    puts(a);
    getch();
    }