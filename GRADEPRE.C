#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c,d,e,f;
  float g;
  clrscr();
  printf("Enter marks of Physics:");
  scanf("%d", &a);
  printf("Enter marks of Chemistry:");
  scanf("%d", &b);
  printf("Enter marks of Biology:");
  scanf("%d", &c);
  printf("Enter marks of Mathematics:");
  scanf("%d", &d);
  printf("Enter marks of Computer:");
  scanf("%d", &e);
  f=a+b+c+d+e;
  g=f/5;
  printf("Hence the percentage is %0.2f and ",g);
  if(g>=90 && g<=100)
  {
     printf("Grade obtained is A");
     }
  else
  {
     if(g>=80 && g<90)
     {
      printf("Grade obtained is B");

     }
     else
     {
       if(g>=70 && g<80)
       {
	 printf("Grade obtained is C");
	}
	else
	{
	   if(g>=60 && g<70)
	   {
	      printf("Grade obtained is D");
	      }
	      else
	      {
		if(g>=40 && g<60)
		{
		 printf("Grade obtained is E");
		}
		 else
		 {
		    if(g>=0 && g<40)
		    {
		    printf("Grade
		    obtained is F");
		    }
		    else
		    {
		      printf("No Grade is applicable");
		     }
		  }
	       }
	 }
     }
  }
  getch();
  }