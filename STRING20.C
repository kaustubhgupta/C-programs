#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[20],b;
  int i,f;
  clrscr();
  printf("Enter the string:");
  gets(a);
  printf("Enter the character for which you want to remove first occurance:");
  scanf("%c",&b);
  for(i=0;a[i]!='\0';i++)
  {
     if(a[i]==b)
      {
      f=i;
      break;
      }
     }
   for(i=0;a[i]!='\0';i++)
   {
      if(f!=i)
      printf("%c",a[i]);
      }

     getch();
     }