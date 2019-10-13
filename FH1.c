#include<stdio.h>
#include<conio.h>
char a[200];
void display()
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
}
int main()
{
    FILE *fp;
    fp=fopen("fh1.txt","a");
    if(fp==0)
    {
        printf("File not found!");
        return 0;
            }
        printf("Enter any sentence:");
        printf("\n");
        gets(a);
   fprintf(fp,"%s",a);
   display();
   fclose(fp);

   getch();
}
