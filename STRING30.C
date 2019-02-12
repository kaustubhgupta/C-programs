#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200],b[50];
  int l1,l2,i,n,j=0,count=0,k;
  clrscr();
  printf("Enter the string:");
  gets(a);
  l1=strlen(a);
  printf("Enter the word:");
  gets(b);
  l2=strlen(b);
  for(i=0;i<l1;i++)
  {
    if(a[i]==b[j])
    {
      while(j<l2)
      {
	 if(a[i]==b[j])
	 {
	    k=1;
	    i++;
	    j++;
	    }
       }
       if(k==1)
       count++;
	j=0;
      }
    }
  printf("Word occurs %d times",count);
  getch();
  }