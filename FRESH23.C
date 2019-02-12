#include<stdio.h>
#include<conio.h>
void main()
{
   int a[2][2],i,j,n,sum=0;
   clrscr();
   printf("Input the size of the square matrix:");
   scanf("%d",&n);
   printf("Input the elements of matix:");
   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       printf("\nelement-[%d],[%d]:",i,j);
       scanf("%d",&a[i][j]);
      }
      }
   printf("The matix is:\n");

   for(i=0;i<n;i++)
   {
     for(j=0;j<n;j++)
     {
       printf("%d\t",a[i][j]);
      }
      printf("\n");
      }

   for(i=0;i<n;i++)
   {
      for(j=0;j<n;j++)
      {
	 if(j==i)
	 sum=sum+a[i][j];
	 }
	 }
   printf("Sum of right diagonal matrix is:%d",sum);
   getch();
   }


