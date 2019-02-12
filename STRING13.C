#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[20],b;
  int i;
  clrscr();
  printf("Enter the string:");
  gets(a);
  printf("Enter the character for which you want occurance:");
  scanf("%c",&b);
  for(i=0;a[i]!='\0';i++)
  {
     if(a[i]==b)
      {
      printf("%d",i);
      break;
      }
     }
     getch();
     }