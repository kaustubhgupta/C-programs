#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("Enter two no:\n");
   scanf("%d%d",&a,&b);
   printf("Press 1 for addition\nPress 2 for subtraction\nPress 3 for multiplication\nPress 4 for division(Quotient)\nPress 5 for division(Remainder)");
   printf("\nEnter your choice:");
   scanf("%d",&c);
   switch(c)
   {
      case 1:printf("%d",a+b);
      break;
      case 2:printf("%d",a-b);
      break;
      case 3:printf("%d",a*b);
      break;
      case 4:printf("%d",a/b);
      break;
      case 5:printf("%d",a%b);
      break;
      default:printf("This is invalid choice");

   }
   getch();
   }

