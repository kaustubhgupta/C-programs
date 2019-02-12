#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
   float a,b,c,d;
   printf("Enter value of a,b and c:");
   scanf("%f%f%f", &a,&b,&c);
   d=pow(b,2)-4*a*c;
   if(d>=0)
     printf("Roots of equation are %0.2f and %0.2f", (-b+sqrt(d))/2*a*c,(-b-sqrt(d))/2*a*c);
   else
    printf("Roots are complex");
   }
