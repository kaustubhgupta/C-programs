#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],i,n,num;
  clrscr();
  printf("Input the size of the array:");
  scanf("%d",&n);
  printf("Input the elements of the array:\n");
  for(i=0;i<n;i++)
  {
    printf("element-%d:",i);
    scanf("%d",&a[i]);
    }
    printf("Input the entry to be deleted:");
    scanf("%d",&num);
    printf("New array is:\n");
   for(i=0;i<n;i++)
   {
       if(i!=num)
       printf("%d",a[i]);
       }
       getch();
       }