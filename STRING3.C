#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200],b[200],c[400];
  int l,k=0,i;
  clrscr();
  puts("Enter the first string:");
  gets(a);
  strcpy(c,a);
  l=strlen(a);
  puts("Enter the second string:");
  gets(b);
  k=l;
  for(i=0;b[i]!='\0';i++)
  {
     c[k]=b[i];
    // c[k]++;
     k++;
     }
  puts("Combined string is:");
  puts(c);
  getch();
  }
