#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  clrscr();
  printf("Enter the Temperature:");
  scanf("%d", &a);
  if(a<0)
  {
   printf("It is Freezing weather");
  }
  else
  {
   if(a>=0 && a<10)
   {
    printf("It is very cold weather");
   }
   else
   {
     if(a>=10 && a<20)
     {
      printf("It is cold weather");
     }
     else
     {
       if(a>=20 && a<30)
       {
	printf("It is Normal Temperature");
       }
       else
       {
	 if(a>=30 && a<40)
	 {
	   printf("It is hot weather");
	 }
	 else
	 {
	   printf("It is very hot weather");
	  }
       }
     }
    }
  }

  getch();
  }