#include<stdio.h>
#include<conio.h>
struct bank_customer_d
{
  char name[200];
  int acc_num;
  int bal;
  };
struct bank_customer_d input()
{
  struct bank_customer_d c;
  fflush(stdin);
  printf("\nEnter name of customer:");
  gets(c.name);
  printf("\nEnter the Account Number:");
  scanf("%d",&c.acc_num);
  printf("\nEnter the balance:$");
  scanf("%d",&c.bal);
  return c;
  }
void balance_check(struct bank_customer_d c)
      {
     printf("\n%s",c.name);
     }
void balance_add(struct bank_customer_d c)
{

     printf("\n%d",100+c.bal);
     }
void main()
{
  struct bank_customer_d cc[20];
  int i,n,e;
  clrscr();
  printf("WELCOME TO BANKING WORLD!\n");
  printf("Enter number of customers to register:");
  scanf("%d",&e);
  for(i=1;i<=e;i++)
  {
    printf("\nCustomer-%d",i);
    cc[i]=input();
    }
  do
  {
  printf("\nSelect one choice:\n1.Check less balance\n2.Add extra balance\n3.Exit\n");
  scanf("%d",&n);


    switch(n)
    {
      case 1:for(i=1;i<=e;i++)
	     {
	      if(cc[i].bal<200)
	      balance_check(cc[i]);
	      }
	      break;
      case 2:for(i=1;i<=e;i++)
	     {
	      if(cc[i].bal>=1000)
	     balance_add(cc[i]);
	     }
	     break;
      case 3:exit(0);
      default:printf("INVALID INPUT!");
      }
      }
      while(n!=3);
      getch();
      }