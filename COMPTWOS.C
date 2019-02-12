#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("Enter the two no:");
  scanf("%d%d", &a,&b);
  switch(a>b)
  {
    case 1:printf("%d is greater than %d",a,b);
    break;
    case 0:
	   switch(b>a)
	   {
	     case 1:printf("%d is greater than %d",b,a);
	     break;
	     case 0:printf("Both are equal");
	     break;
	   }
  }
  getch();
  }