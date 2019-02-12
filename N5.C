#include<stdio.h>
#include<conio.h>
int main()
{
  int i,n,t,w;
  double sum=0;
  clrscr();
  printf("Enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    if(i%2==0)
    {
      t=-(1.0)/(double)i;
      w=0;
      }
      else
      {
	t=0;
	w=(1.0)/(double)i;
	}
	sum+=t+w;
	}
	printf("Sum is %0.2f",sum);
	getch();
	return 0;
	}

