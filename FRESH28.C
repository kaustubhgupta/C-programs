#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20][20],n,i,j,s,d1,d2,s1;
  clrscr();
  printf("Input the size of the matix:");
  scanf("%d",&n);
  printf("Input the elements of the matrix:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
    printf("element-[%d],[%d]:",i,j);
    scanf("%d",&a[i][j]);
    }
    }
  printf("The matrix is:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
    printf("%d ",a[i][j]);
    }
    printf("\n");
    }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i==j)
      {
	if(a[i][j]==1)
       s=d1;
	}

       else
       {
	 if(a[i][j]==0)
	s1=d2;
	 }
       }
       }
    if(s==d1 && s1==d2)
    printf("It is identity matrix");
    else
    printf("It is not an identity matrix");
  getch();
  }