#include<stdio.h>
#include<conio.h>
#include"calhead.h"
void main()
{
  int a,b,n;
  clrscr();
  printf("\nEnter the choice:\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n4. DIVIDE\n5. REMAINDER\n");
  scanf("%d",&n);
  switch(n)
  {
     case 1:printf("Enter two numbers:\n");
	    scanf("%d%d",&a,&b);
	    printf("Sum of numbers is %d",add(a,b));
	    break;
     case 2: printf("Enter two numbers:\n");
	    scanf("%d%d",&a,&b);
	    printf("Subtraction of numbers is %d",sub(a,b));
	    break;
     case 3: printf("Enter two numbers:\n");
	    scanf("%d%d",&a,&b);
	    printf("Multiplication of numbers is %d",multiply(a,b));
	    break;
     case 4: printf("Enter two numbers:\n");
	     scanf("%d%d",&a,&b);
	    printf("Division of numbers is %d",divide(a,b));
	    break;
     case 5: printf("Enter two numbers:\n");
	    scanf("%d%d",&a,&b);
	    printf("Remiander of numbers is %d",remainder(a,b));
	    break;
     default:printf("INVALID INPUT!");
     }
     getch();
     }