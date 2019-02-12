#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("Enter the two number:\n");
  scanf("%d%d", &a,&b);
  switch(a,b)
  {
    case 1:if(a>b)
	    {
	      printf("%d is greater than %d",a,b);
	      }
	      else
	      {
		 printf("%d is greater than %d",b,a);
		 }
    break;
    default:printf("Both are equal");
  }
  getch();
  }