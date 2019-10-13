#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char a[20],b[20];
    int i,l;
    printf("Enter the password:");
    gets(a);
    l=strlen(a);
    strcpy(b,a);
    for(i=0;i<l;i++)
    {
        a[i]=a[i]-a[i]+4;
        printf("%c",a[i]);
    }
    printf("\n");
    puts(a);
    puts(b);
    getch();
}
