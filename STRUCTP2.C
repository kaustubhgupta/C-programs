#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student_details
{
  char name[200];
  int score;
  };
struct student_details input()
{
   struct student_details sd;
   fflush(stdin);
   printf("Enter the name of the student:");
   gets(sd.name);
   printf("Enter the marks scored:");
   scanf("%d",&sd.score);
   return sd;
   }
void main()
{
  struct student_details sdd[20];
  int i,n,t,j;
  char w[200];
  clrscr();
  printf("Enter the number of students you want to register:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     sdd[i]=input();
     }
     printf("\nTOP SCORERS ARE:\n");
   printf("NAME\t\tSCORE");
   for(i=1;i<=n;i++)
   {
      for(j=i+1;j<=n;j++)
      {
	if(sdd[i].score<sdd[j].score)
	{
	  t=sdd[i].score;
	  sdd[i].score=sdd[j].score;
	  sdd[j].score=t;
	  strcpy(w,sdd[i].name);
	  strcpy(sdd[i].name,sdd[j].name);
	  strcpy(sdd[j].name,w);
	  }
	  }
	  }
     for(i=1;i<=3;i++)
     {
       printf("\n\n%s\t\t  %d",sdd[i].name,sdd[i].score);
       }
       getch();
       }