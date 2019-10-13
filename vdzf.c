#include<stdio.h>
main()
{
    int i,j,N;

        scanf("%d",&N);
  for(i=N; i>=1; i--)
    {
        // First inner part of upper half
        for(j=N; j>i; j--)
        {
            printf("%d", j);
        }

        // Second inner part of upper half
        for(j=1; j<=(i*2-1); j++)
        {
            printf("%d", i);
        }

        // Third inner part of upper half
        for(j=i+1; j<=N; j++)
        {
            printf("%d", j);
        }

        printf("\n");
    }

}
