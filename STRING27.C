#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char a[200],b[50];
  int l1,l2,i,n,j=0,k;
  clrscr();
  printf("Enter the string:");
  gets(a);
  l1=strlen(a);
  printf("Enter the word:");
  gets(b);
  l2=strlen(b);
  for(i=0;i<l1;i++)
  {

    n=i;
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
       {
	printf("Word found at %d",n+1);
	break;
	}
	j=0;
      }
      else
      k=0;
    }
  if(k==0)
  printf("Word not found");
  getch();
  }