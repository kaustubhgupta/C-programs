#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20][20],n,i,j;
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
  printf("Setting zero in upper triangle:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      if(i<j)
      {
       a[i][j]=0;
       printf("%d ",a[i][j]);
       }
       else
       printf("%d ",a[i][j]);
       }
       printf("\n");
       }
  getch();
  }