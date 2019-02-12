#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],b[20],n,i,*p,*q,*r;
  clrscr();
  p=&a[0];
  q=&b[0];
  r=&n;
  printf("Enter the size of the array:");
  scanf("%d",r);
  printf("Enter the elements of the array:\n");
  for(i=0;i<*r;i++)
  {
    scanf("%d",p);
    *q=*p;
    p++;
    q++;
    }
    q=&b[0];
  printf("Entered elements are:\n");
  for(i=0;i<*r;i++)
  {
    printf("%d\n",*q);
    q++;
    }
  getch();
  return 0;
  }
