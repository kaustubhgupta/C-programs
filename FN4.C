#include<stdio.h>
#include<conio.h>
int even(int a);
int odd(int a);
void main()
{
  int b;
  clrscr();
  printf("Enter any no:");
  scanf("%d",&b);
  printf("Even test\n");
  even(b);
  printf("\nOdd test\n");
  odd(b);
  getch();
  }
int even(int a)
{
    if(a%2==0)
    printf("YES");
    else
    printf("NO");
    return 0;

}int odd(int a)
{
    if(a%2==1)
    printf("YES");
    else
    printf("NO");
    return 0;
    }