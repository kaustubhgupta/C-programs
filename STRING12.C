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
  for(i=l-1;i>=0;i--)
  {

     while(a[i]!=' ')
     {
       b[k]=a[i];
       k++;
       i--;
       }
       b[k]='\0';
       k++;
       strrev(b);
       printf("%s ",b);
       k=0;
       i=i;
       }
	getch();
	}