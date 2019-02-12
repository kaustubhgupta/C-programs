#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],b[20],c[40],n,i,j,k=0,t;
  clrscr();
  printf("Input the size of the array:");
  scanf("%d", &n);
  printf("Input elements of the array(A):\n");
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&a[i]);
    c[i]=a[i];
    }
    k=n;
      printf("Input elements of the array(B):\n");
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&b[i]);
    c[k]=b[i];
    k++;
    }
    k=n+n;
    //For test of merged
   /* for(i=0;i<k;i++)
    {
      printf("%d",c[i]);
      }*/
      printf("The mreged array in decending order is:\n");
      for(i=0;i<k;i++)
      {
	for(j=0;j<k;j++)
	{
	  if(c[i]<c[j])
	  {
	    t=c[i];
	    c[i]=c[j];
	    c[j]=t;
	    }
	    }
	    }
	for(i=0;i<k;i++)
	{
	  printf("%d\n",c[i]);
	  }
      getch();
      }

