#include<stdio.h>
#include<conio.h>
struct student_details
{
  int rollnum;
  char name[200];
  int age;
  int marks;
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
  printf("Enter the marks of the student:");
  scanf("%d",&sd.marks);
  return sd;
  }
int output(struct student_details sd)
{
  printf("\nName of student is:%s",sd.name);
  printf("\nRoll number of student is:%d",sd.rollnum);
  printf("\nAge of student is:%d",sd.age);
  printf("\nMarks of student is:%d",sd.marks);
  return 0;
  }
void main()
{
  struct student_details sdd[20];
  int i,n;
  clrscr();
  printf("Enter the number of students to register:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  sdd[i]=input();
  printf("Information stored is :\n");
  for(i=1;i<=n;i++)
  {
    output(sdd[i]);
    printf("\n");
    }
  getch();
  }
