#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
  char a[200][200],b[200][200],c[200];
  //PROGRAM FOR CONCEPT UNDERSTANDING!
  
  int i,j,n;
  //clrscr();
  printf("Enter quantity of names:");
  scanf("%d",&n);
  printf("Enter the names:");
  for(i=0;i<n;i++)
  {
    scanf("%s",a[i]);
    }
  printf("Names entered are:\n");
  for(i=0;i<n;i++)
  {
    printf("%s\n",a[i]);

    } /*
     int i,j,n;
  //clrscr();
  printf("Enter quantity of names:");
  scanf("%d",&n);
  printf("Enter the names:\n");
  for(i=0;i<n;i++)
  {
    scanf("%s",a[i]);
    }
  printf("Names in alphabatical order are:\n");
  for(i=0;i<n;i++)
  {
      for(j=i+1;j<n;j++)
      {
      if(a[i][0]>a[j][0])
      {
	  strcpy(c,a[i]);
	  strcpy(a[i],a[j]);
	  strcpy(a[j],c);
	  }
       }
    }
    for(i=0;i<n;i++)
    {
      printf("%s\n",a[i]);
      }
    getch();
    */
  return 0;
  }
