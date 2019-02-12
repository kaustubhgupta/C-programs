#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,n;
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
      }
   printf("\nElements in the reverse order:");
   for(i=n;i>0;i--)
   {
       printf("%d ",a[i]);
       }

   getch();
   }






