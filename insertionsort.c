 #include<stdio.h>
#include<conio.h>
int insertnum(int arrnum[],int x,int y);
void main()
{

    int arr[5]={23,90,9,25,16},i,j;
    //char flag;
    for(i=0;i<5;i++)
    {
        for(j=0;j<i;j++)
        {


        if(arr[j]>arr[i])
        {
            insertnum(arr,i,j);
            //flag=y;
        }

        }
    }
    printf("\nThis is sorted array:");
    for(i=0;i<5;i++)
    {
        printf(" %d\t",arr[i]);
    }
    getch();
}
int insertnum(int arrnum[],int x,int y)
{
    int temp;
    temp=arrnum[x];
    for(;x>y;x--)
        arrnum[x]=arrnum[x-1];
    arrnum[x]=temp;

}
