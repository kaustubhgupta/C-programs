#include<stdio.h>
#include<conio.h>
void main()
{
  int a[200],b,i,n,j=0,d[200];
  clrscr();
  printf("Input the six of the array:");
  scanf("%d",&n);
  printf("Input %d elements in the array:\n",n);
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&a[i]);
    d[i]=a[i];
    }
  printf("Input the position where value to be inserted:");
  scanf("%d",&b);
  printf("Enter the value you want:");
  scanf("%d",&d[b]);

  for(i=n-1;i>=b;i--)
  {
     for(j=i+1;j>b;j--)
     {
	d[j]=a[i];
       }
      }
      for(i=0;i<n+1;i++)
      printf("%d",d[i]);
  getch();
  }
