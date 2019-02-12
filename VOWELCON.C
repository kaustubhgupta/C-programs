#include<stdio.h>
#include<conio.h>
void main()
{
   char a;
   clrscr();
   printf("\nEnter any character:");
   scanf("%c", &a);
   if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
   {
     printf("It is a vowel");
     }
   else
   {
      printf("It is a consonant");
      }

   getch();
   }