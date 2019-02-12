#include<stdio.h>
#include<conio.h>
struct s_d
{
  int roll_num;
  char name[200];
  int age;
  char address[200];
  };
struct s_d input()
{
   struct s_d s;
   printf("Enter the Roll Number:");
   scanf("%d",&s.roll_num);
   fflush(stdin);
   printf("Enter the Name:");
   gets(s.name);
   printf("Enter the age:");
   scanf("%d",&s.age);
   fflush(stdin);
   printf("Enter the address:");
   gets(s.address);
   return s;
   }
void age14(struct s_d s)
{
       if(s.age==14)
	printf("\n%s",s.name);
	}
void even(struct s_d s)
{
       if(s.roll_num%2==0)
       printf("\n%s",s.name);
       }
void search(struct s_d s)
{
    printf("\nName: %s",s.name);
    printf("\nAge : %d",s.age);
    printf("\nAddress :%s",s.address);
    }

void main()
{
  struct s_d ss[20];
  int n,i,r,c;
  clrscr();
  printf("WELCOME TO SCHOOL RECORD\n");
  printf("Enter number of students to register:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     ss[i]=input();
     }
     do
     {
     printf("\nSelect one choice:\n1.Students with age 14\n2.Students with even roll number\n3.Search any roll num\n4.Exit\n");
     scanf("%d",&c);
     switch(c)
     {

    case 1:  printf("\nStudents of Age 14 are:");
	     for(i=1;i<=n;i++)
	     age14(ss[i]);
	     break;

    case 2:  printf("\nStudents with even roll number are:");
	     for(i=1;i<=n;i++)
	     even(ss[i]);
	     break;

    case 3: printf("\nEnter the roll number to search:");
	    scanf("%d",&r);
	    for(i=1;i<=n;i++)
	    {
	       if(r==ss[i].roll_num)
	       search(ss[i]);
	       }
	    break;
    case 4: exit(0);
    default:printf("INVALID CHOICE!");
    }
    }
      while(c!=4);
      getch();
      }
