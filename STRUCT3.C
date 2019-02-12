#include<stdio.h>
#include<conio.h>
struct student_details
{
  int rollnum;
  char name[200];
  int age;
  char address[200];
  };
struct student_details input()
{
  struct student_details sd;
  fflush(stdin);
  printf("Enter the name of the student:");
  gets(sd.name);
  printf("Enter the roll number of the student:");
  scanf("%d",&sd.rollnum);
  printf("Enter the age of the student:");
  scanf("%d",&sd.age);
  fflush(stdin);
  printf("Enter the address of the student:");
  gets(sd.address);
  return sd;
  }
int output(struct student_details sd)
{
  printf("\nName of student is:%s",sd.name);
  printf("\nRoll number of student is:%d",sd.rollnum);
  printf("\nAge of student is:%d",sd.age);
  printf("\nAddress of student is:%s",sd.address);
  return 0;
  }
void main()
{
  struct student_details sdd[20];
  int i;
  clrscr();
  printf("Enter the details of 15 students:");
  for(i=1;i<=15;i++)
  sdd[i]=input();
  printf("Information stored is :\n");
  for(i=1;i<=15;i++)
  {
    output(sdd[i]);
    printf("\n");
    }
  getch();
  }
