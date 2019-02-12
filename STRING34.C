#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  int  i,j,l,z;
  char a[200];
  clrscr();
  printf("Enter the string:");
  gets(a);
  l=strlen(a);
  printf("Trimed string is:");
  for(i=0;i<l;i++)
  {
     for(j=1+i;j<l;j++)
     {
	if(a[i]==' ' && a[j]==' ')
	{
	   while(j<l)
	   {
	     a[i]=a[j];
	     i++;
	     j++;
	     z=i;
	     }
	     }
	     }
	     }
	     a[z]='\0';
	     puts(a);
	     getch();
	     return 0;
	     }
