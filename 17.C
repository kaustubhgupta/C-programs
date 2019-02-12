#include<stdio.h>
#include<conio.h>
void main()
{
  char a;
  clrscr();
  printf("Enter a alphabet:");
  scanf("%c", &a);
  switch(a>='a' && a<='z' || a>='A' && a<='Z')
  {
    case 1:
	   if(a=='a' || a=='i'|| a=='e' || a=='o' || a=='u' ||a=='A' || a=='I'|| a=='E' || a=='O' || a=='U')
	   {
	    printf("It is a vowel");
	   }
	   else
	   {
	    printf("It is a consonant");
	   }
	   break;
    case 0:printf("This is invalid input");
    }
    getch();
    }





