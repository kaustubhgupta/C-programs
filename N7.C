#include<stdio.h>
#include<conio.h>
void main()
{
  int r,c,w,rp,wp,cp,d,s,t;
  clrscr();
  printf("Enter quantity of rice in kg:");
  scanf("%d", &r);
  printf("Enter quantity of wheat in kg:");
  scanf("%d", &w);
  printf("Enter quantity of corn in kg:");
  scanf("%d", &c);
  printf("Enter price of rice per kg:");
  scanf("%d", &rp);
  printf("Enter price of wheat per kg:");
  scanf("%d", &wp);
  printf("Enter price of corn per kg:");
  scanf("%d", &cp);
  t=(r)*(rp)+(w)*(wp)+(c)*(cp);
  if(t>5000)
 { d=t/10;
  s=t-d;
  printf("The total cost is:%d",s); }
  else
  printf("The total cost is:%d",t);

  getch();
  }




