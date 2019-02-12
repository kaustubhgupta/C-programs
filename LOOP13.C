#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,b=0;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(;a!=0;)
  {
    b=(b)*(10)+a%10;
    a=a/10;
    }
    printf("%d",b);
     getch();
     }