#include<stdio.h>
#include<conio.h>
#include<string.h>
int palendrom(int a[],int n)
{
      int i,p;
   for(i=0;i<n;i++)
   {
     if(a[i]==a[n-i-1])
     p=1;
     else
     p=0;
     }
   return (p);
   }
   void main()
   {
      int a[200],n,i;
      clrscr();
      printf("Enter the size of the array:");
      scanf("%d",&n);
      printf("Enter the no. to check for palendrom:");
      for(i=0;i<n;i++)
      {
      scanf("%d",&a[i]);
      }
      if(palendrom(a,n)==1)
      printf("It is palendrom");
      if(palendrom(a,n)==0)
      printf("It is not palendrom");
      getch();
      }



