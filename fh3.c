#include<stdio.h>
#include<conio.h>
char a[20][2000];
int n,i;
void output()
{
    FILE *fp;
    fp=fopen("fh3.txt","r");
    if(fp==0)
    {
        printf("File not found!");
    }
    for(i=1;i<=n;i++)
    {
        while(fscanf(fp,"%s",a[i])!=EOF)
        {
            printf("\n%s",a[i]);
        }
    }
}
void main()
{
    printf("WELCOME TO FILE HANDLING TEST!");
    printf("Enter the number of line to enter:\n");
    scanf("%d",&n);
    FILE *fp;
    fp=fopen("fh3.txt","a+");
    if(fp==0)
    {
        printf("File not found!");

    }
    for(i=1;i<=n;i++)
    {
        printf("Enter line %d:",i);
        fflush(stdin);
        gets(a[i]);
        fprintf(fp,"%s\n",a[i]);

    }
    output();
    fclose(fp);
     getch();
}

