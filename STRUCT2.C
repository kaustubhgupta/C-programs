#include<stdio.h>
#include<conio.h>
struct student_details
{
  char name[200];
  int age;
  };
struct student_details input()
{
  struct student_details sd;
  fflush(stdin);
  printf("\nEnter the name of the student:");
  gets(sd.name);
  printf("\nEnter the age of the student:");
  scanf("%d",&sd.age);
  return sd;
  }
int output(struct student_details sd)
{
  printf("\nName of student is:%s",sd.name);
  printf("\nAge of student is:%d",sd.age);
  return 0;
  }
void main()
{
  struct student_details sdd[20];
  int i;
  clrscr();
  printf("Enter details of 5 students:\n\n");
  for(i=1;i<=5;i++)
  {
    printf("Roll Number-%d",i);
    sdd[i]=input();
    }
  printf("Information storedstarting from roll number 2 :\n");
  for(i=2;i<=5;i++)
  {
    printf("Roll Number-%d\n",i);
    output(sdd[i]);
    printf("\n\n");
    }
  getch();
  }
