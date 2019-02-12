#include<stdio.h>
#include<conio.h>
struct date
{
  int day;
  int year;
  char month[200];
  };
struct date input()
{
  struct date d;
  printf("Enter the day:\n");
  scanf("%d",&d.day);
  fflush(stdin);
  printf("Enter the month:\n");
  gets(d.month);
  printf("Enter the year:\n");
  scanf("%d",&d.year);
  return d;
  }
void extend(struct date d)
{
   int new_date,i,j;
   char month[]={'JAN','FEB','MAR','APR','MAY','JUN','JULY','AUG','SEPT','OCT','NOV','DEC'};
  if(d.month==='dec'||d.month=='DEC')
  {
     d.year++;
     }
  if(d.month=='JAN'||d.month=='jan'|| d.month=='mar'||d.month=='MAR'||d.month=='may'||d.month=='MAY'||d.month=='july'||d.month=='JULY'||d.month=='aug'||d.month=='AUG'||d.month=='OCT'||d.month=='oct'||d.month=='dec'||d.month=='DEC')
  {
     new_date=(d.day+45)%31;
     }
  if(d.month=='APR'||d.month=='apr'|| d.month=='jun'||d.month=='JUN'||d.month=='sept'||d.month=='SEPT'||d.month=='nov'||d.month=='NOV')
  {
     new_date=(d.day+45)%30;
     }
  if(d.month=='FEB'||d.month=='feb')
  {
     if(d.year%4==0)
	new_date=(d.day+45)%29;
     else
	new_date=(d.day+45)%28;
	}

     printf("\nNew date is %d/%s/%d",new_date,d.month,d.year);
     }
int main()
{
  struct date dd;
  int c;
  //clrscr();
  printf("\t\t*****WELCOME TO DATE EXTENDER!*****\n");
  dd=input();
  do
  {
    printf("\nEnter one choice:\n1. Extend date\n2. Exit\n");
    scanf("%d",&c);
    switch(c)
    {
      case 1:dd=extend();
      //case 2:exit(0);
      default:printf("INVALID INPUT!");
      }
      }while(c!=2);
      return 0;
      getch();
      }
