#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,pro=1;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(;a!=0;)
  {
    b=a%10;
    a=a/10;
    pro=pro*b;
    }
    printf("%d",pro);

     getch();
     }