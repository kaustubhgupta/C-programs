#include<stdio.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   printf("Enter any no between 1 to 7:\n");
   scanf("%d", &a);
   if(a==1)
   {printf("Its Monday");}
    else
    { if(a==2)
       {printf("Its Tuesday");}
       else
       {  if(a==3)
	  {printf("Its Wednesday");}
	  else
	  { if(a==4)
	    {printf("Its Thursday");}
	    else
	    { if(a==5)
	      {printf("Its Friday");}
	      else
	      { if(a==6)
		{printf("Its Saturday");}
		else
		{ if(a==7)
		  {printf("Its Sunday");}
		  else
		  {  printf("This is not a vaild input");

		   }
		 }
	       }
	     }
	   }
	}
   }
   getch();
   }