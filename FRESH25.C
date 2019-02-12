#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20][20],i,j,n,sum1=0,sum2=0;
  clrscr();
  printf("Input the size of the matrix:");
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
    printf("The sum of rows and columns of the matrix:\n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
     sum1=sum1+a[i][j];
     }
     printf("%d",sum1);
     printf("\n");
     sum1=0;
     }
   for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
     sum2=sum2+a[j][i];
     }
     printf("%d",sum2);
     printf("\n");
     sum2=0;
     }
     getch();
     }
