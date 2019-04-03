#include<stdio.h>
#include<conio.h>
char a[200];
void main()
{
        FILE *fp;
    fp=fopen("fh1.txt","r");
    if(fp==0)
    {
      printf("File not found!");
    }
    while(fscanf(fp,"%s",a)!=EOF)
    {
        printf("%s",a);
    }
    getch();
}
