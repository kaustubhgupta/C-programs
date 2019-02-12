#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20][20],*p,b[20][20],*q,c[20][20],*r,n,*s,i,j;
  clrscr();
  p=&a[0][0];
  q=&b[0][0];
  r=&c[0][0];
  s=&n;
  printf("Enter the size of the matrix:");
  scanf("%d",s);
  printf("Enter the elements of the matrix(A):\n");
  for(i=0;i<*s;i++)
   {
       for(j=0;j<*s;j++)
       {
	 printf("element-[%d][%d]:",i,j);
	 scanf("%d",(p+((i*n)+j)*2));
	 }
	 }
       p=&a[0][0];
       printf("Enter the elements of the matrix(B):\n");
  for(i=0;i<*s;i++)
  {
    for(j=0;j<*s;j++)
    {
       printf("element-[%d][%d]:",i,j);
       scanf("%d",(q+((i*n)+j)*2));
       }
       }
       q=&b[0][0];
	printf("Matrix(A):\n");
  for(i=0;i<*s;i++)
  {
    for(j=0;j<*s;j++)
    {
       printf("%d ",*(p+((i*n)+j)*2));
       }
       printf("\n");
       }
	printf("Matrix(B):\n");
  for(i=0;i<*s;i++)
  {
    for(j=0;j<*s;j++)
    {
       printf("%d ",*(q+((i*n)+j)*2));
       }
       printf("\n");
       }
   r=&c[0][0];
   p=&a[0][0];
   q=&b[0][0];
    printf("Sum of matrix is:\n");
  for(i=0;i<*s;i++)
  {
    for(j=0;j<*s;j++)
    {
       *(r+((i*n)+j)*2)=*(p+((i*n)+j)*2)+*(q+((i*n)+j)*2);
       }
       }
       r=&c[0][0];
 for(i=0;i<*s;i++)
  {
    for(j=0;j<*s;j++)
    {
       printf("%d ",*(r+((i*n)+j)*2));
       }
       printf("\n");
       }


       getch();
       }