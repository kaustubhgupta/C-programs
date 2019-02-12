#include<stdio.h>
#include<conio.h>
void main()
{
  int a;
  char b;
  float c;
  unsigned int d;
  short int e;
  long int f;
  double g;
  long double h;
  long long i;
   clrscr();
   printf("\nEnter int:");
   scanf("%d", &a);
   printf("\nEnter char:");
   scanf("%c", &b);
   printf("\nEnter float:");
   scanf("%f", &c);
   printf("\nEnter unsigned int:");
   scanf("%d", &d);
   printf("\nEnter short int:");
   scanf("%d", &e);
   printf("\nEnter long int:");
   scanf("%l", &f);
   printf("\nEnter double:");
   scanf("%e", &g);
   printf("\nEnter long double:");
   scanf("%d", &h);
   printf("\nEnter long long:");
   scanf("%ll", &i);
   printf("\nHence, \n%d \n%c \n%f \n%d \n%d \n%l \n%e \n%d \n%ll",a,b,c,d,e,f,g,h,i);
   getch();
   }
