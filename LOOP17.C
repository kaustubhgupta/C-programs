#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b=0,c;
  clrscr();
  printf("Enter the no:");
  scanf("%d", &a);
  for(;a!=0;)
  {
    b=b*10+a%10;
    a=a/10;
    }
   // printf("%d",b);
    for(;b!=0;)
    {
      c=b%10;
      b=b/10;
      switch(c)
      {
	case 1:printf("One");
	break;
	case 2:printf("Two");
	break;
	case 3:printf("Three");
	break;
	case 4:printf("Four");
	break;
	case 5:printf("Five");
	break;
	case 6:printf("Six");
	break;
	case 7:printf("Seven");
	break;
	case 8:printf("Eight");
	break;
	case 9:printf("Nine");
	break;
	default:printf("Zero");
	}
	}
	getch();
	}