#include<stdio.h>
#include<conio.h>
void main()
{
  int a,c,d,e,f,g;
  char b[20];
  clrscr();
  printf("\nInput the Name of the student:");
  scanf("%s", &b);
  printf("\nInput the Roll Number of the student:");
  scanf("%d", &a);
  printf("\nInput the marks of Physics, Chemistry and Computer Application:",c,d,e);
  scanf("%d%d%d", &c,&d,&e);
  printf("\nRoll No:%d",a);
  printf("\nName of Student:%s",b);
  printf("\nMarks in Physics:%d",c);
  printf("\nMarks in Chemistry:%d",d);
  printf("\nMarks in Computer Application:%d",e);
  f=c+d+e;
  printf("\nTotal Marks:%d",f);
  g=f/3;
  printf("\nPercentage:%0.2f",(float)g);
  getch();
  }

