#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char a[200];
   int i,d1=0,d2=0;
   clrscr();
   puts("Enter the word");
   gets(a);
   for(i=0;a[i]!='\0';i++)
   {
     if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
     d1++;
     else
     {
       if(a[i]>='a' && a[i]<='z'|| a[i]>='A' && a[i]<='Z')
       d2++;
       }
       }
    printf("No of vowels are:%d\nNo of consonants:%d",d1,d2);
    getch();
    }
