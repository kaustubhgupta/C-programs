#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  int i,j,z=0,n,m,l;
  char a[200];
  clrscr();
  printf("Enter the string:");
  gets(a);
  l=strlen(a);
  printf("Trimed string is:");
  for(i=l-1;i>=0;i--)
  {
     j=i-1;
     n=j;
     m=i;
     if(a[i]==' ' && a[j]==' ')
     {
       while(a[i]!='\0')
       {
	  a[j]=a[i];
	  j++;
	  i++;
       }
       z++;
       j=n;
       i=m;
     }
     j--;
  }
  for(i=0;i<=z;i++)
  a[l-i]='\0';
  puts(a);
  getch();
  return 0;
  }
