#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter a no. :");
  scanf("%d", &a);
  switch(a>0)
  {
    case 1:printf("It is a positive no.");
    break;
    case 0:
	   switch(a<0)
	   {
	      case 1:printf("It is a negative no.");
	      break;
	      case 0:printf("It is zero");
	      break;
	   }
   }
   getch();
   }