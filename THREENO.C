#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("\nEnter three no:\n");
  scanf("%d%d%d", &a,&b,&c);
  if(a>b && a>c)
  {
    printf("%d is greatest",a);

    }
  else
  {
    if(b>c && b>a)
    {
      printf("%d is greatest",b);

      }
     else
     {
       if(c>a && c>b)
       {
	 printf("%d is greatest",c);
	 }
	else
	{
	  printf("All are equal");
	  }
      }
  }

  getch();

  }
