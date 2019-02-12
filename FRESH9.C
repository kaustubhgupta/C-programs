#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,n,m=0,k;
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
     if(a[i]>m)
     m=a[i];
     else
     m=m;
     }
    printf("Maximum element is:%d",m);
    for(i=1;i<=n;i++)
   {
     if(a[i]<k)
     k=a[i];
     else
     k=k;
     }
    printf("\nMinimum element is:%d",k);

    getch();
    }


