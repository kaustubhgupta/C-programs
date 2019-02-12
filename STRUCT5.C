#include<stdio.h>
#include<conio.h>
struct marks
{
  int roll_num;
  char name[200];
  int chem_marks;
  int maths_marks;
  int phy_marks;
  };
struct marks input()
{
   struct marks sm;
   fflush(stdin);
   printf("Enter the name of the student:");
   gets(sm.name);
   printf("Enter the roll number of the student:");
   scanf("%d",&sm.roll_num);
   printf("Enter the marks of chemistry:");
   scanf("%d",&sm.chem_marks);
   printf("Enter the marks of maths:");
   scanf("%d",&sm.maths_marks);
   printf("Enter the marks of chemistry:");
   scanf("%d",&sm.phy_marks);
   return sm;
   }
float percentage(struct marks sm)
{
  float t;
  t=sm.chem_marks+sm.maths_marks+sm.phy_marks;
   return (t/3);
       }
void main()
{
  struct marks smm[10];
  int i;
  float p;
  clrscr();
  printf("Enter the details of 5 students:\n");
  for(i=1;i<=5;i++)
  {
    smm[i]=input();
    }
    printf("Precentage scored by studnets are:");
    printf("\n\nNAME\tPRECENTAGE");
    for(i=1;i<=5;i++)
    {
       p=percentage(smm[i]);
       printf("\n%s\t  %0.2f\n",smm[i].name,p);
       }
       getch();
       }

