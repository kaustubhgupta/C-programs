#include<stdio.h>
#include<conio.h>
struct date
{
  int day;
  int month;
  int year;
  };
struct date input()
{
  struct date d;
  printf("\nEnter the day(between 1-31):");
  scanf("%d",&d.day);
  printf("Enter the month:");
  scanf("%d",&d.month);
  printf("Enter year:");
  scanf("%d",&d.year);
  return d;
  }
void date_check(struct date d)
{
    int new_date;
   if(d.month==1||d.month==3||d.month==5||d.month==7||d.month==8||d.month==10||d.month==12)
       new_date=(d.day+30)%31;
   else
   {
     if(d.month==4||d.month==6||d.month==9||d.month==11)
       new_date=(d.day+30)%30;
     else
     {
	if(d.month==2)
	{
	   if(d.year%4==0)
	    new_date=(d.day+30)%29;
	   else
	    new_date=(d.day+30)%28;

	 }
      }
   }
   if(new_date<15)
   {
      d.month++;
      //if(d.month%12
    }//printf("\nNew date is %d",new_date);
}
int main()
{
   struct date dd;
   int n;
   //clrscr();
   printf("\nWELCOME TO DATE EXTENDER!:");
   printf("\nEnter the date:");
   dd=input();
   do
   {
     printf("\nEnter one choice:\n1. Extend date to 45 days\n2. Exit\n");
     scanf("%d",&n);
     switch(n)
     {
       case 1:date_check(dd);
	      break;
       //case 2:exit(0);
       }
       }while(n!=2);
       getch();
       return 0;
       }

