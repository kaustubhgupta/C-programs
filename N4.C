#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i;
  double sum;
  clrscr();
  printf("Enter value of n:");
  scanf("%d",&n);
  sum=0;
  for(i=1;i<=n;i++)
  {
    sum+=1.0/(double)i;
    }
    printf("%0.2f",sum);
    getch();
    }