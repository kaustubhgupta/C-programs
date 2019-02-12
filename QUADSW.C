#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
  int a,b,c,d,r1,r2;
  clrscr();
  printf("\nEnter respective values of a,b,c:\n");
  scanf("%d%d%d",&a,&b,&c);
  d=pow(b,2)-4*(a)*(c);
  switch(d>0)
  {
    case 1:
	   r1=-b+sqrt(d)/2*(a);
	   r2=-b-sqrt(d)/2*(a);
	   printf("%d and %d are roots",r1,r2);
	   break;
    case 0:
	   switch(d==0)
	   {
	     case 1:
		    r1=-b+sqrt(d)/2*(a);
		    r2=-b-sqrt(d)/2*(a);
		    printf("%d and %d are roots",r1,r2);
		    break;
	     case 0:
		    printf("Roots are imaginary");
	    }

   }
   getch();
   }
