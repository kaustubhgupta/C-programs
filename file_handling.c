#include<stdio.h>
#include<conio.h>
/*struct student
{
   int roll_no;
   char name[200];
   int scores;

};*/
char name[200];
int roll_no;
void display()
{
    FILE *fp;
    fp=fopen("student.txt","r");
    if(fp==0)
    {
      printf("File not found!");
      //break;
      return 0;
    }
    while(fscanf(fp,"%s %d\n",name,&roll_no)!=EOF)
    {
        printf("\nName: %s",name);
        printf("\nRoll Number: %d",roll_no);
    }
}
int main()
{
    FILE *fp;
    fp=fopen("student.txt","a");
    if(fp==0)
    {
      printf("File not found!");
      //break;
      return 0;
    }

    printf("\nEnter the name:");
    gets(name);
    printf("\nEnter the roll number:");
    scanf("%d",&roll_no);
    fprintf(fp,"%s   %d\n",name,roll_no);
    printf("Record sucessful!");
    display();
    fclose(fp);
}
