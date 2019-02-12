#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200],b[200];
  int i,l,k=0;
  clrscr();
  printf("Enter the string:");
  gets(a);
  l=strlen(a);
  strcpy(b,a);
  for(i=l-1;i>=0;i--)
  {
    b[k]=a[i];
    k++;
    }
    puts(b);
    getch();
    }

