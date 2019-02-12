#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200];
  int i,j=0,l;
  clrscr();
  printf("Enter the string:");
  gets(a);
  l=strlen(a);
  printf("Trimed string is:");
  for(i=l-1;i>=0;i--)
  {
    j=i-1;
    if(a[i]==' ' && a[j]==' ')
    {
       while(a[i]!='\0')
       {
	 a[j]=a[i];
	 i++;
	 j++;
	 }
	 }
	 }
	 a[l-1]='\0';
	 puts(a);
	 getch();
	 }
