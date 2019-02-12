#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],b[20],i,j,n,t;
  clrscr();
  printf("Input the size of the array:");
  scanf("%d",&n);
  printf("Input the elements of the array:\n");
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&a[i]);
    b[i]=a[i];
    }
  for(i=0;i<n;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>b[j])
      {
	t=a[i];
	a[i]=b[j];
	b[j]=t;
	}
	}
	}
   for(i=0;i<n;i++)
   {
     printf("%d",a[i]);
     }

   printf("The second smallest value of aaray is:%d",a[1]);
   getch();
   }