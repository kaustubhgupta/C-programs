#include<stdio.h>
#include<conio.h>
int main()
{
   int a[20][20],n,*r,*p,i,j;
   clrscr();
   p=&a[0][0];
   r=&n;
   printf("Enter the size of matrix:\n");
   scanf("%d",r);
   printf("Enter the elements of the matrix:\n");
   for(i=0;i<*r;i++)
   {
       for(j=0;j<*r;j++)
       {
	 printf("element-[%d][%d]:",i,j);
	 scanf("%d",p+(i*n+j)*2);
	 }
	 }
	 printf("Matrix is:\n");
   p=&a[0][0];
   for(i=0;i<*r;i++)
   {
       for(j=0;j<*r;j++)
       {
	 printf("%d ",*(p+(i*n+j)*2));
	 }
	 printf("\n");
	 }

	 getch();
	 return 0;
	 }