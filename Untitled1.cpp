#include<stdio.h>
main()
{
  int a,fac=1;
  printf("Name: KAUSTUBH\n");
  printf("Roll NO: F-70\n");
  printf("Enter no:");
  scanf("%d", &a);
  for(a;a>=1;a--)
  {
    fac=fac*a;
    }
    printf("%d",fac);

   }

