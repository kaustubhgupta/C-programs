#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200];
  int  count=0,i;
  clrscr();
  printf("Enter the whole string:");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    count++;
    }
    printf("Length of the string is:%d",count);
    printf("\nLength of the string is:%d",strlen(a));
    getch();
    }
