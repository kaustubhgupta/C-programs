#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],j,n,b=0,c=0,d=0;
  clrscr();
  printf("\nEnter no of no:\n");
  scanf("%d",&n);
  printf("\nEnter the list of no:\n");
  for(j=1;j<=n;j++)
  {
    scanf("%d",&a[j]);
    }
   for(j=1;j<=n;j++)
  {
      if(a[j]>0)
      b++;
      if(a[j]<0)
      c++;
      if(a[j]==0)
      d++;
    }
    printf("\nHence No of positive ,negative and zeros are %d, %d and %d",b,c,d);

    getch();
    }

