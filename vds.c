#include<stdio.h>
main()
{
    char name[50];
    int m1,m2,i,j,n;
    FILE *fp;
    fp=fopen("Student_Details_.txt","w");
    if(fp==0)
        printf("File Not Found!");
    fprintf(fp,"***Student LOG***\n\nName\t\tMarks 1\t\tMarks 2\n");
    printf("\nYour Name\n\nF-  ");
    printf("\nData Storage Program\n\nEnter number of Students to register:");
    scanf("%d",&n);
    printf("Enter Student Details:");
    for(i=1;i<=n;i++)
    {
        fflush(stdin);
        printf("\nStudent -%d\nEnter Name:",i);
        gets(name);
        printf("\nEnter Marks 1:");
        scanf("%d",&m1);
        printf("\nEnter Marks 1:");
        scanf("%d",&m2);
        fprintf(fp,"%s\t\t%d\t\t%d\n",name,m1,m2);
    }

    fclose(fp);
    printf("Thanks! check your Code folder to check the text file!");
    return 0;
}
