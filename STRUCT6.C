#include<stdio.h>
#include<conio.h>
#include<math.h>
struct complex_num
{
  int x;
  int y;
  };
struct complex_num input()
{
  struct complex_num c;
  printf("Enter the real part:");
  scanf("%d",&c.x);
  printf("Enter the imaginary part:");
  scanf("%d",&c.y);
  return c;
  }
void add(struct complex_num c1, struct complex_num c2)
{
   printf("Sum is (%d)+i(%d)",c1.x+c2.x,c1.y+c2.y);
   }
void sub(struct complex_num c1, struct complex_num c2)
{
   printf("Subtraction is (%d)+i(%d)",c1.x-c2.x,c1.y-c2.y);
   }

void multiply(struct complex_num c1, struct complex_num c2)
{
   printf("Multiplication is (%d)+i(%d)",c1.x*c2.x+c1.y*c2.y,c1.x*c1.y+c2.x*c2.y);

   }
void main()
{
  struct complex_num c1,c2;
  int n;
  clrscr();
  do
  {
  printf("\nSelect one choice:\n 1.ADD\n 2.SUBTRACT\n 3.MULTIPLY\n 4.EXIT\n");
  scanf("%d",&n);
  switch(n)
  {
    case 1:printf("Enter Complex 1:\n");
	   c1=input();
	   printf("Enter Complex 2:\n");
	   c2=input();
	   add(c1,c2);
	   break;
    case 2:printf("Enter Complex 1:\n");
	   c1=input();
	   printf("Enter Complex 2:\n");
	   c2=input();
	   sub(c1,c2);
	   break;
    case 3:printf("Enter Complex 1:\n");
	   c1=input();
	   printf("Enter Complex 2:\n");
	   c2=input();
	   multiply(c1,c2);
	   break;
    case 4:exit(0);
    default:printf("INVALID INPUT");
    }
    }
    while(n!=4);
    getch();
    }