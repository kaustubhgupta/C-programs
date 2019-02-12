#include<stdio.h>
#include<conio.h>
void main()
{
  float a,sum;
  clrscr();
  printf("Enter value upto which you want sum of series:");
  scanf("%f", &a);
  for( float i=1;i<=a;i++)
  {
    sum=sum+i;
    }
    printf("%0.0f",sum);
   getch();
   }