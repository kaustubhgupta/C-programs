#include<stdio.h>
#include<conio.h>
int main()
{
  int a[20],n,i,*p,*q;
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
    p=&a[*q-1];
  printf("Reverse of the array is :\n");
  for(i=*q-1;i>=0;i--)
  {
     printf("%d\n",*p);
     p--;
     }
     getch();
     return 0;
     }