#include<stdio.h>
#include<conio.h>
int main()
{
   int a[20],*p,n,*q,b,*r,i;
   clrscr();
   p=&a[0];
   q=&n;
   r=&b;
   printf("Enter teh size of the array:");
   scanf("%d",q);
   printf("Enter the elements of the array:\n");
   for(i=0;i<*q;i++)
   {
      scanf("%d",p);
      p++;
      }
   p=&a[0];
   printf("Enter the element to be found:");
   scanf("%d",r);
   printf("Element found at:");
    for(i=0;i<*q;i++)
    {
      if(*p==*r)
      {
      printf("%d",i+1);
      break;
      }
      else
      {
      p++;
      }
      }
      getch();
      return 0;
      }


