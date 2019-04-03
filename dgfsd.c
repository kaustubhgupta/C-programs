#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,k;
    for(i=1;i<=4;i++)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        for(j=i;j<=4;j++)
        {
            printf("%d ",j);
        }
        for(j=3;j>=i;j--)
        {
            printf("%d ",j);
        }

        printf("\n");
    }
}
