#include<stdio.h>
void main()
{
	int n;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(j==1||j==10||i==1||i==10||i==j)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}