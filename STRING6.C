#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[20];
  int i;
  clrscr();
  printf("Enter the word:");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a' && a[i]<='z')
    a[i]-=32;
    else
    {
    if(a[i]>='A' && a[i]<='Z')
    a[i]+=32;
    }
    }
  puts(a);
  getch();
  }
