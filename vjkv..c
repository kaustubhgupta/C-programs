#include<stdio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=2*n-1;i>=1;i--)
    {
        for(j=2*n-1;j>=1;j++)
        {
            if(i==1 || i==2*n-1)
            {
                printf("%d",n);
            }
            else if(j==1 || j==2*n-1)
            {
                printf("%d",n);
            }
            else if(i==j)
            {
                printf("%d",n);
            }
        }
        printf("\n");
    }
    return 0;
}
