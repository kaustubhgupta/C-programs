#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],i,*p,n,*q;
  clrscr();
  p=&a[0];
  q=&n;
  printf("Enter the size of the array:");
  scanf("%d",q);
  printf("Enter the elements of the array:\n");
  for(i=0;i<*q;i++)
  {
    scanf("%d",p);
    p++;
    }
  printf("Elements entered are:\n");
  p=&a[0];
  for(i=0;i<*q;i++)
  {
    printf("%d\n",*p);
    p++;
    }
   getch();
   return 0;
   }

