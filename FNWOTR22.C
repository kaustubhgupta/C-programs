#include<stdio.h>
#include<conio.h>
int sumarray(int a[], int n)
{
  int i,sum=0;
  for(i=0;i<n;i++)
  {
    sum+=a[i];
    }
    return sum;
}
void main()
{
  int a[200],n,i;
  clrscr();
  printf("Enter the size of the array:");
  scanf("%d", &n);
  printf("Enter the elements of the array\n");
  for(i=0;i<n;i++)
  {
   printf("element-%d:",i);
   scanf("%d",&a[i]);
   }
   printf("Sum of the elements of the array:%d",sumarray(a,n));
   getch();
   }