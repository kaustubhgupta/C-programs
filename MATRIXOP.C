#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j,k,a[2][2],b[2][2],c[2][2],d[2][2];
  clrscr();
  printf("Enter elements of matrix(A):\n");
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
	scanf("%d",&a[i][j]);
	}
	}
   printf("Enter elements of matrix(B):\n");
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
	scanf("%d",&b[i][j]);
	}
	}
  printf("This is matrix(A):\n");
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
	printf("%d\t",a[i][j]);
	}
      printf("\n");
      }

  printf("This is matrix(B):\n");
  for(i=0;i<2;i++)
  {
     for(j=0;j<2;j++)
     {
	printf("%d\t",b[i][j]);
	}
      printf("\n");
      }
   printf("Sum of matrices is:\n");
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
	 c[i][j]=a[i][j]+b[i][j];
	 printf("%d\t",c[i][j]);
	 }
	 printf("\n");
	 }
    printf("Difference of matrices is:\n");
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
	 c[i][j]=a[i][j]-b[i][j];
	 printf("%d\t",c[i][j]);
	 }
	 printf("\n");
	 }
     printf("Multiplication of matrices is:\n");
   for(i=0;i<2;i++)
   {
      for(j=0;j<2;j++)
      {
      d[i][j]=0;
      }
      }
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
       {
	  for(k=0;k<2;k++)
	  {
	     d[i][j]+=a[i][k]*b[k][j];
	     }
	     printf("%d\t",d[i][j]);
	     }
	     printf("\n");
	     }
    getch();
    }