#include<stdio.h>
//#include<conio.h>
main()
{
   int a[20],i,n,j,t,k;
//   clrscr();
   printf("Input the number of elements to store in the array:\n");
   scanf("%d",&n);
   printf("Input %d number of elements in the array:\n",n);
   for(i=0;i<n;i++)
   {
     printf("element-%d:",i);
     scanf("%d",&a[i]);
     }
   for(i=n-2;i>=0;i--)
   {
      for(j=n-1;j>=n-1-i;j--)
      {
	 if(a[j]<a[j-1])
	 {
	   t=a[j];
	   a[j]=a[j-1];
	   a[j-1]=t;
	   }
	   }
	   for(k=0;k<n;k++)
	   {
	     printf("%d ",a[k]);
	   }
	   printf("\n");
	   }
    printf("Elements of the array in sorted assending order:\n");
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
       }
    //getch();
    }
