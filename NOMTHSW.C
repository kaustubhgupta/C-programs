#include<stdio.h>
#include<conio.h>
void main()
{
  int a,y;
  clrscr();
  printf("Enter month no:");
  scanf("%d",&a);
  switch(a)
  {
    case 1:printf("It has 31 days");
    break;
    case 2:printf("Enter the year:");
	   scanf("%d",y);
	   (y%4==0)?printf("It has 29 days"):printf("It has 28 days");
	   break;
    case 3:printf("It has 31 days");
    break;
    case 4:printf("It has 30 days");
    break;
    case 5:printf("It has 31 days");
    break;
    case 6:printf("It has 30 days");
    break;
    case 7:printf("It has 31 days");
    break;
    case 8:printf("It has 31 days");
    break;
    case 9:printf("It has 30 days");
    break;
    case 10:printf("It has 31 days");
    break;
    case 11:printf("It has 30 days");
    break;
    case 12:printf("It has 31 days");
    break;
    default:printf("This is invalid input");
  }
  getch();
  }











