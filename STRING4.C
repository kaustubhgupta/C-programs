#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[20],b[20];
  int d;
  clrscr();
  printf("Enter the password:");
  gets(a);
  printf("ReEnter the password:");
  gets(b);
  d=strcmp(a,b);
  if(d==0)
  printf("Access Granted");
  else
  printf("Acces Denied");
  getch();
  }