#include<stdio.h>
#include<conio.h>
int main()
{
  int a,factorial=1;
  printf("Enter no:");
  scanf("%d", &a);
  for(int i=a;i>=1;i--)
  {
    factorial=factorial*i;
    }
    printf("%0.0f",factorial);
   getch();
   return 0;
   }
