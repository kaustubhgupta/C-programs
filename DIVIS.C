#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter a no:");
  scanf("%d", &a);
  if(a%5==0 && a%11==0)
   {
     printf("It is divisible by both 5 amd 11");
   }
   else
   {
      if(a%5==0)
      {
	printf("It is divisible by 5");

				       }
      else
      {
	 if(a%11==0)
	 {
	   printf("It is divisible by 11");
	   }
	    else
	    {
	       printf("It is not divisible by both");
	      }
      }
   }
  getch();

}