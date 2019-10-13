#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k=1;
 /* RECTANGLE PATTERN
    for(i=0;i<4;i++)
    {
       for(j=0;j<9;j++)
       {
           printf("*");
       }
       printf("\n");
*/

   /*triangle left side
    for(i=0;i<4;i++)
    {

        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

*/
/*upside down
for(i=4;i>=0;i--)
    {

        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
*/
/*right lower
for(i=0;i<4;i++)
    {
       for(k=4;k>i;k--)
       {
           printf(" ");
       }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    /*upper triangle
    for(i=4;i>=0;i--)
    {
       for(k=4;k>i;k--)
       {
           printf(" ");
       }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
    //Number patterns

    /*
	for(i=0;i<4;i++)
    {
		 
        for(j=0;j<=i;j++)
        {
            printf(" %d ",k);
            ++k;
        }
        printf("\n");
    }
    
*/

/*upside down
for(i=4;i>=0;i--)
    {

        for(j=0;j<i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
*/
//right lower
for(i=0;i<4;i++)
    {
       for(k=4;k>i;k--)
       {
           printf(" ");
       }
        for(j=0;j<=i;j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    
    /*upper triangle
    for(i=4;i>=0;i--)
    {
       for(k=4;k>i;k--)
       {
           printf(" ");
       }
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    */
}
