#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    int i,j,z,l;
    char a[200];
    clrscr();
    printf("Enter the string:");
    gets(a);
    l=strlen(a);
    printf("Trimed string:");
    for(i=l-1;i>=0;i--)
    {
      for(j=i-1;j>0;j--)
      {
	if(a[i]==' ' && a[j]==' ')
	{
	   while(j<l)
	   {
	      a[j]=a[i];
	      j++;
	      i++;
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
