#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,n,sum=0;
   clrscr();
   printf("Input the number of elements to store in the array:\n");
   scanf("%d",&n);
   printf("Input %d number of elements in the array:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("element-%d:",i);
     scanf("%d",&a[i]);
     }
   for(i=1;i<=n;i++)
   {
      sum=sum+a[i];
      }
   printf("\nSum of all elements in the array:%d",sum);


   getch();
   }