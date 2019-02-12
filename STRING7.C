#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200];
  int i,d1=0,d2=0,d3=0;
  clrscr();
  puts("Enter the word:");
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>='a' && a[i]<='z'||a[i]>='A' && a[i]<='Z')
    d1++;
    else
    {
      if(a[i]>='0' && a[i]<='9')
      d2++;
      else
      {
	d3++;

      }
    }
   }
   printf("No of alpabets :%d\nNo of alphabets :%d\nNo of special characters :%d",d1,d2,d3);
   getch();
   }