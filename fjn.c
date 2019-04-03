#include<stdio.h>
square(int n)
{
    int i,j;
    //scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1 || j==1 || j==n || i==n)
            {
                printf("%d",n);
            }
            else
                square(n-1);
        }
        printf("\n");
    }
    return 0;
}
main()
{
    int n;
    scanf("%d",&n);
    square(n);
    return 0;

}
