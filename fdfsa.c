#include<stdio.h>
main()
{
    int i,j,a,b,k=0;
    for(i=1;i<=9;i++)
    {

        for(j=1;j<=9;j++)
        {
                printf(" #");
                if(i==2 && j==5)
                {
                    for(a=2;a<=8;a++)
                    {
                        a<=5?k++:k--;
                      for(b=2;b<=8;b++)
                      {
                          if(b>=6-k && j<=4+k)
                          {
                              printf("Y");
                          }
                      }
                      printf("\n");
                    }


                }

        }
        printf("\n");
    }


    return 0;

}
