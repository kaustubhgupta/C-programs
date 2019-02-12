#include<stdio.h>
#include<conio.h>
void arrayout(int a[], int n)
{
   int i;
   for(i=0;i<n;i++)
   {
     printf("%d\n",a[i]);
     }
}
void main()
{
  int a[200],n,i;
  clrscr();
  printf("Enter the size of the array:");
  scanf("%d", &n);
  printf("Enter the elements\n");
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&a[i]);
    }
   arrayout(a,n);
   getch();
   }


