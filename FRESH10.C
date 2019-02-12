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
   printf("\nThe even elements are:");
   for(i=1;i<=n;i++)
   {
      if((a[i])%(2)==0)
      printf("%d ",a[i]);
      }
   printf("\nThe odd elements are:");
   for(i=1;i<=n;i++)
   {
      if((a[i])%(2)==1)
      printf("%d ",a[i]);
      }
     getch();
     }