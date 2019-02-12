#include<stdio.h>
#include<conio.h>
void main()
{
  char a[200],b[200],*p,*q;
  int i,n;
  p=&a[0];
  q=&b[0];
  clrscr();
  printf("Enter the size of the string:");
  scanf("%d",&n);
  printf("Enter the string:");
  for(i=0;i<=n;i++)
  {
  scanf("%c",p);
  p++;
  }
  p=&a[0];
  fflush(stdin);
  printf("Copied string is:");
  for(i=0;i<=n;i++)
  {
    *q=*p;
    p++;
    q++;
    }
    puts(b);
    getch();
    }





