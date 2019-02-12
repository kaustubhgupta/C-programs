#include<stdio.h>
#include<conio.h>
int total=0;
struct item_details
{
  char name[200];
  int rate;
  int qty;
  };
struct item_details input()
{
  struct item_details i_d;
  fflush(stdin);
  printf("Enter Name of Item:");
  gets(i_d.name);
  printf("Enter the rate of item:$");
  scanf("%d",&i_d.rate);
  printf("Enter the quantity of the item:");
  scanf("%d",&i_d.qty);
  return i_d;
  }
int output(struct item_details i_d)
{
   int cost;
   cost=(i_d.rate)*(i_d.qty);
   printf("\n%s\t\t$%d",i_d.name,cost);
   total+=cost;
   return total;
   }
   void main()
   {
    int n,i;
    struct item_details i_dd[20];
    clrscr();
    textcolor(RED);
    cprintf("                   *****WELCOME TO YOUR GROCERY STORE*****");
    printf("\nEnter number of items you want to register:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       printf("ITEM %d\n",i);
       i_dd[i]=input();
       }
       printf("\nITEM\t\t  COST");
     for(i=1;i<=n;i++)
     {
	total=output(i_dd[i]);
	}
	textcolor(YELLOW);
       cprintf("\n\n  *****Total Cost of Inventory is $%d!******",total);
	getch();
	}
