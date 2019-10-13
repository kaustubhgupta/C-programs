#include<stdio.h>
struct student
{
    char name[50];
    int m1,m2;
};
main()
{
    int n,i,j;
    struct student s;
    FILE *fp;
    fp=fopen("Student_Details.txt","w");
    if(fp==0)
        printf("File Not Found!");
    //fprintf(fp,"***STUDENT LOG***\n\nName\t\tMarks 1\t\tMarks 2\n");
    printf("\nKaustubh\n\nF-70");
    printf("\nData Storage Program\n\nEnter number of Students to register:");
    scanf("%d",&n);

    printf("Enter Student Details:");
    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("\nStudent -%d\nEnter Name:",i);
        gets(s.name);
        printf("\nEnter Marks 1:");
        scanf("%d",&s.m1);
        printf("\nEnter Marks 2:");
        scanf("%d",&s.m2);
        fwrite(&s,sizeof(s),1,fp);
    }

    for(i=1;i<=n;i++)
    {
        fread(&s,sizeof(struct student),1,fp);
        printf("Name: %s\n",s.name);
        printf("Marks 1 - %d",s.m1);
        printf("Marks 2 - %d",s.m2);
    }

    fclose(fp);
    return 0;
}
