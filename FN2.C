#include<stdio.h>
#include<conio.h>
#include"CIRCLE.h"
void main()
{
   int a;
   clrscr();
   printf("Enter the radius:");
   scanf("%d",&a);
   printf("Diameter is: %d\nCircumference is: %0.2f\nArea is: %0.2f",diam(a),circum(a),area(a));
   getch();
   }