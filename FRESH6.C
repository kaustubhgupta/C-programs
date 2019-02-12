#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],b[20],c[20],n,i,j,k=0;
  clrscr();
  printf("Input size of array:");
  scanf("%d",&n);
  printf("Input elements of the array:\n");
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&a[i]);
    b[i]=a[i];
    c[i]=0;
    }
    printf("Unique elements are:\n");
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
	if(a[i]==b[j])
	c[k]++;
	}
	if(c[k]==1)
	{
	  printf("%d ",a[i]);
	}
	k++;
	}
    getch();
    }
