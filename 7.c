#include<stdio.h>
main()
{
    char mgr_name[50],wrk_name[50];
    int mgr_salary,wrk_salary,m,w,i,j;
    FILE *fp1;
    FILE *fp2;
    fp1=fopen("Manager_Details.txt","w");
    fp2=fopen("Worker_Details.txt","w");
    if(fp1==0)
        printf("File Not Found!");
    if(fp2==0)
        printf("File Not Found!");
    fprintf(fp1,"***MANAGER LOG***\n\nName\t\tSalary\n");
    fprintf(fp2,"***WORKER LOG***\n\nName\t\tSalary\n");
    printf("\nRadhika Singhal\n\nF-65");
    printf("\nData Storage Program\n\nEnter number of Managers to register:");
    scanf("%d",&m);
    printf("\nEnter number of Workers to register:");
    scanf("%d",&w);
    printf("Enter Manager Details:");
    for(i=1;i<=m;i++)
    {
        fflush(stdin);
        printf("\nManager -%d\nEnter Name:",i);
        gets(mgr_name);
        printf("\nEnter Salary:");
        scanf("%d",&mgr_salary);
        fprintf(fp1,"%s\t\t%d\n",mgr_name,mgr_salary);
    }
       for(i=1;i<=m;i++)
    {
        fflush(stdin);
        printf("\nWorker -%d\nEnter Name:",i);
        gets(wrk_name);
        printf("\nEnter Salary:");
        scanf("%d",&wrk_salary);
        fprintf(fp2,"%s\t\t%d\n",wrk_name,wrk_salary);

    }
    fclose(fp1);
    fclose(fp2);
    printf("Thanks! check your Code folder to check the text file!");
    return 0;
}
