#include<stdio.h>
#include<conio.h>
struct distance
{
  float dist;
  };
void main()
{
   struct distance d1,d2;
   clrscr();
   printf("Enter the distance 1 in (feet'.inch''):");
   scanf("%f",&d1.dist);
   printf("Enter the distance 2 in (feet'.inch''):");
   scanf("%f",&d2.dist);
   printf("Sum of distances is:%0.2f",d1.dist+d2.dist);
   getch();
   }


