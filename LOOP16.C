#include<stdio.h>
#include<conio.h>
void main()
{
  int a,i,b,p;
  clrscr();
  printf("Enter No:");
  scanf("%d", &a);
  for(i=2;i<=a/2;i++)
  {
    b=a%i;
    if(b==0)
   { p=0;
    break;}
    else
    p=1;
    }
    if(p==1 || a==2 || a==3)
    printf("Prime");
    if(p==0)
    printf("Not Prime");
     getch();
     }