#include<conio.h>
#include<stdio.h>
void main()
{
  char a[200],*p;
  int i,l=0;
  clrscr();
  p=&a[0];
  printf("Enter the string:");
  gets(a);
  for(i=0;*p!='\0';i++)
  {
  l++;
  p++;
  }
  printf("String length is %d",l);
  getch();
  }