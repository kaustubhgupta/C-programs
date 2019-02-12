#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("\nEnter the selling price:$");
   scanf("%d", &a);
   printf("Enter the cost price:$");
   scanf("%d", &b);
   c=a-b;
   if(c>0)
   {
     printf("Yay you got a profit of $ %d",c);
     }
   else
   {
       if(c<0)
       {
	  printf("Sorry you are in loss of $ %d",-c);
	  }
	else
       {
	printf("Hey you did'nt lose nor gained");

	}

       }
   getch();
   }