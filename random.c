#include<stdio.h>
main()
{
    int n,i,j,m=0,x,k;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        x=n;
        for(j=1;j<=i && j<n;j++)
        {
            printf("%d",x);
        }
        x++;
        for(j=i*2;j<(n*2)-1;j++)
        {
            printf("%d",x);
            x++;
        }
        printf("\n");
    }
    return 0;

}
