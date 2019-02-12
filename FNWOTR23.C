#include<stdio.h>
#include<conio.h>
int max(int a[], int n)
{
  int i,m=0;
  for(i=0;i<n;i++)
  {
    if(a[i]>m)
    m=a[i];
    }
    return m;
}
int min(int a[], int n)
{
  int i,k=9999;
  for(i=0;i<n;i++)
  {
    if(a[i]<=k)
    k=a[i];
    }
    return k;
}

int main()
{
  int a[200],n,i;
 // clrscr();
  printf("Enter the size of the array:");
  scanf("%d", &n);
  printf("Enter the elements of the array\n");
  for(i=0;i<n;i++)
  {
   printf("element-%d:",i);
   scanf("%d",&a[i]);
   }
   printf("Max of the elemnts entered is:%d",max(a,n));
   printf("\nMin of the elemnts entered is:%d",min(a,n));
   getch();
   return 0;
   }
