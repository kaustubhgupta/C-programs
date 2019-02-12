#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,n,b[20];
   clrscr();
   printf("Input the number of elements to store in the array:\n");
   scanf("%d",&n);
   printf("Input %d number of elements in the array:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("element-%d:",i);
     scanf("%d",&a[i]);
     }
   printf("Elements in array are:\n");
   for(i=1;i<=n;i++)
   {
      printf("%d ",a[i]);
      b[i]=a[i];
      }
   printf("\nElements in the copied array:\n");
   for(i=1;i<=n;i++)
   {
       printf("%d ",b[i]);
       }

   getch();
   }