#include<stdio.h>
#include<conio.h>
void main()
{
  int i,n;
  clrscr();
  for(i=0;i<100;i++)
  {
    if(i%2==0)
    continue;
    else
    printf("\t%d ",i);
    }
    //EXIT PROGRAM!
  /*  for(i=0;i<10;i++)
    {
      if(i==10)
      exit(0);
      else
      printf("\t%d ",i);
      } */
     label:printf("Enter the number:");
	   scanf("%d",&n);
	   if(n==1)
	   goto test;
	   else
	   goto label;
	   test:printf("ALL DONE.....");
    getch();
    }