#include<stdio.h>
int prime(int a)
{
  int i,p,e;
  for(i=2;i<=a/2;i++)
  {
     e=a%i;
     if(e==0)
     {
     p=0;
     break;
     }
     else
     p=1;
     }
  if(p==1 || a==2 || a==3)
  printf("It is prime");
  if(p==0)
  printf("It is not prime");
   return 0;
   }
int armstrong(int a)
{
  int sum=0,n,i,b;
  n=a;
  for(;a!=0;)
  {
    b=a%10;
    a=a/10;
    sum=sum+b*b*b;
    }
  if(sum==n)
  printf("It is armstrong no");
  else
  printf("It is not armstrong no");
  return 0;
  }
int perno(int a)
{
  int i,b,sum=1;
  for(i=2;i<=a/2;i++)
  {
     b=a%i;
     if(b==0)
     sum=sum+i;
     }
  if(sum==a)
  printf("It is a perfect number");
  else
  printf("It is not a prefect number");
  return 0;
  }