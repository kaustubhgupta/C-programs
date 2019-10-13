#include<stdio.h>
main()
{
int i,j,n;
scanf("%d",&n);
for(i=0;i<n;i++)
    {

        for(j=1;j<=2*i+1;j++)
        {

            printf("%d",2*j);

        }
        printf("\n");
    }
    }
