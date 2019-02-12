#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,b,c,sum;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  c=a%10;
  for(i=1;i<=a;i++)
  {
    b=a%10;
    a=a/10;
    }
    sum=b+c;
    printf("%d",sum);
     getch();
     }