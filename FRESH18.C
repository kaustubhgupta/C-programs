#include<stdio.h>
#include<conio.h>
void main()
{
   int a[3][3],i,j;
   clrscr();
   printf("Input elements in the matrix:\n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	 printf("element-[%d][%d]:",i,j);
	 scanf("%d",&a[i][j]);
	 }
	 }
   printf("The matrix is:\n");
   for(i=0;i<3;i++)
   {
      for(j=0;j<3;j++)
      {
	 printf("%d\t",a[i][j]);
	 }
	 printf("\n");
	 }
   getch();
   }
