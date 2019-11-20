#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	float i,sum;
	printf("Enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=1/i;		
	}
	printf("Sum is %.2f",sum);
	
	
	return 0;
}
