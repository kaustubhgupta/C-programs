#include<stdio.h>
#include<conio.h>
struct emp_details
{
  char name[200];
  int salary;
  int work_hours;
  };
struct emp_details input()
{
  struct emp_details ed;
  fflush(stdin);
  printf("Enter the name:");
  gets(ed.name);
  printf("Enter the salary:$");
  scanf("%d",&ed.salary);
  printf("Enter the work hours:");
  scanf("%d",&ed.work_hours);
  return ed;
  }
void main()
{
  struct emp_details edd[20];
  int i,n,c;
  clrscr();
  printf("\nEnter the number of employes to register:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("Enter details of employ -%d\n",i);
     edd[i]=input();
     }
     do
     {
       printf("\nSelect one choice:\n1. Increase salary\n2. Exit\n");
       scanf("%d",&c);
       switch(c)
       {
	  case 1:
		 for(i=1;i<=n;i++)
		 {

		      if(edd[i].work_hours==8)
		      {
			 printf("\n\t%s\t\t$%d",edd[i].name,edd[i].salary+50);
			  }
		      if(edd[i].work_hours==10)
		      {
			 printf("\n\t%s\t\t$%d",edd[i].name,edd[i].salary+100);
			  }
		      if(edd[i].work_hours>=12)
		      {
			 printf("\n\t%s\t\t$%d",edd[i].name,edd[i].salary+150);
			  }
		  }
		  break;
	   case 2:exit(0);
	   default:printf("INVALID INPUT!");
	     }
	   }while(c!=2);
	   getch();
	   }