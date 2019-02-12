#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200];
  int i,l,r;
  clrscr();
  printf("Enter sample:");
  gets(a);
  l=strlen(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==a[l-i-1])
    r=1;
    else
    r=0;
    }
  if(r==1)
  printf("It follows palendrom");
  if(r==0)
  printf("It does not follows palenfrom");
  getch();
  }
