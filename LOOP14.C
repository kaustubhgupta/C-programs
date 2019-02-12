#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,sum=0;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(;a!=0;)
  {
    b=a%10;
    a=a/10;
    sum=sum+b;
    }
    printf("%d",sum);
     getch();
     }