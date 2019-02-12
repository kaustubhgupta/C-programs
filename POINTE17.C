#include<stdio.h>
#include<conio.h>
void main()
{
  int a[200],i,t,*p,n,*q;
  clrscr();
  p=&a[0];
  q=&a[1];
  printf("Enter the size of the array:");
  scanf("%d",&n);
  printf("Enter the elements of the array:\n");
  for(i=0;i<n;i++)
  {
    printf("element-[%d]:",i);
    scanf("%d",p);
    p++;
    }
    p=&a[0];
    printf("Sorted array is:\n");
    for(i=0;i<n;i++)
    {
	if(*p<*q)
	{
	  t=*p;
	  *p=*q;
	  *q=t;
	  }
	  p++;
	  q++;
	  }
	  p=&a[0];
	  for(i=0;i<n;i++)
	  {
	    printf("%d\n",*p);
	    p++;
	    }
	    getch();
	  }