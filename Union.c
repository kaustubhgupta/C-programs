#include<stdio.h>
#include<conio.h>
struct student
{
    int roll_no;
    char name[200];
    int scores;

};
union studen
{
    int roll_no;
    char name[200];
    int scores;
};
void main()
{
    struct student s1;
    union studen s2;
    printf("\nSize of structure:%d",sizeof(s1));
    printf("\nSize of union:%d",sizeof(s2));
    printf("\nEnter name:");
    gets(s2.name);
    puts(s2.name);
    printf("\nEnter score:");
    scanf("%d",&s2.scores);
    printf("\n%d",s2.scores);
    printf("\nEnter roll no:");
    scanf("%d",&s2.roll_no);
    printf("\n");


    printf("\n%d",s2.roll_no);
    getch();

}
