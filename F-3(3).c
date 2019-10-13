#include<stdio.h>
#include<conio.h>
main()
{
    int i,n;
    printf("\nEnter the Number to table of:");
    scanf("%d",&n);
    printf("\nTable is:\n");
    for(i=1;i<=10;i++)
    {
        printf("%dx%d=%d\n",n,i,n*i);

    }
    getch();
}
