#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200],b[200];
  int i,j,k=0,c[200],m=1,d;
  clrscr();
  printf("Enter the string:");
  gets(a);
  strcpy(b,a);
  for(i=0;i<200;i++)
  c[i]=0;
  for(i=0;a[i]!='\0';i++)
  {
     for(j=0;b[j]!='\0';j++)
     {
	if(a[i]==b[j])
	c[k]++;
	}
	k++;
	}
   for(i=0;a[i]!='\0';i++)
   {
     if(c[i]<=m)
     {
     m=c[i];
     d=i;
      }
     }
     printf("%c Character with %d frequency is least used",a[d],m);
    getch();
}