#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],i;
   clrscr();
   printf("Input the 10 elements in the array:\n");
   for(i=0;i<10;i++)
   {
     printf("element-%d:",i);
     scanf("%d",&a[i]);
     }
   printf("Elements in array are:\n");
   for(i=0;i<10;i++)
   {
      printf("%d ",a[i]);
      }
   getch();
   }
