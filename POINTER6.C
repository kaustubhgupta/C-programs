#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],b[20],n,i,*p,*q,*r,t;
  clrscr();
  p=&a[0];
  q=&b[0];
  r=&n;
  printf("Enter the size of the array:");
  scanf("%d",r);
  printf("Enter the elements of the array(A):\n");
  for(i=0;i<*r;i++)
  {
    scanf("%d",p);
    p++;
    }
    p=&a[0];
   printf("Enter the elements of the array(B):\n");
  for(i=0;i<*r;i++)
  {
    scanf("%d",q);
    q++;
    }
    q=&b[0];
  printf("Swaped arrays are:\n");
  for(i=0;i<*r;i++)
  {
      t=*p;
      *p=*q;
      *q=t;
      p++;
      q++;
      }
    p=&a[0];
    q=&b[0];
 printf("Array(A):\n");
  for(i=0;i<*r;i++)
  {
    printf("%d\n",*p);
    p++;
    }
   printf("Array(B):\n");
  for(i=0;i<*r;i++)
  {
    printf("%d\n",*q);
    q++;
    }
    getch();
    return 0;
    }