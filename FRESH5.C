//Valid only for no. with two repeat
#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],b[20],c[20],n,i,j,k=0,dup=0;
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
  for(i=0;i<n;i++)
  {
     for(j=0;j<n;j++)
     {
	if(a[i]==b[j])
	c[k]++;
	}
	k++;
	}
   for(k=0;k<n;k++)
   {
     if(c[k]==2)
     dup++;
      }
    for(i=0;i<k;i++)
    {
       if(dup%2==0)
       dup=dup/2;
       }
     printf("Total no. of duplicate elements are: %d",dup);
     getch();
     }


