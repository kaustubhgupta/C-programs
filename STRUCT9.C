#include<stdio.h>
#include<conio.h>
struct date
{
  int day;
  char month[20];
  int year;
  };
struct date input()
{
  struct date dmy;
  printf("\nEnter the day(between 1-31):");
  scanf("%d",&dmy.day);
  fflush(stdin);
  printf("\nEnter the month:");
  gets(dmy.month);
  printf("Enter the year:");
  scanf("%d",&dmy.year);
  return dmy;
  }
int date_check(struct date x,struct  date y)
{
   int i,j,dc;
   if(x.day==y.day)
   {
     if( x.year==y.year)
     {
	for(i=0;x.month[i]!='\0';i++)
	{
	   for(j=0;y.month[j]!='\0';j++)
	     {
		if(x.month[i]==y.month[j])
		dc=1;
		else
		dc=0;
	     }
	 }
     }
     else
     dc=0;
   }
   else
   dc=0;
   return dc;
}
void main()
{
   struct date d1,d2;
   clrscr();
   printf("\nWELCOME TO YOUR SOFTWARE:\nf");
   printf("\nEnter date:");
   d1=input();
   printf("\nEnter the date again:");
   d2=input();
   if(date_check(d1,d2)==1)
   printf("\nDates match");
   if(date_check(d1,d2)==0)
   printf("\nDates do not match:");
   getch();
   }
