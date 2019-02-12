#include<stdio.h>
#include<conio.h>
void main()
{
   int a[20],i,n,k,t;
   clrscr();
   printf("Input the number of elements to store in the array:\n");
   scanf("%d",&n);
   printf("Input %d number of elements in the array:\n",n);
   for(i=0;i<n;i++)
   {
     printf("element-%d:",i);
     scanf("%d",&a[i]);
     }
   for(i=0;i<n;i++)
   {
      for(k=i+1;k<n;k++)
      {
	 if(a[i]>a[k])
	 {
	   t=a[i];
	   a[i]=a[k];
	   a[k]=t;
	   }
	   }
	   }
    printf("Elements of the array in sorted assending order:\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
       }
    getch();
	}