#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,c,b;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  c=a%10;
  for(i=1;i<=a;i++)
  {
    b=a%10;
    a=a/10;
    }
    printf("%d and %d are first and last digit",b,c);
     getch();
     }