#include<stdio.h>
void main()
{
	int n,a;
	printf("Enter number rows : ");
	scanf("%d",&a);
	n=a/2;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n*2-1;j++)
		{
			if(j>=n-(i-1)&&j<=n+(i-1))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n*2-1;j++)
		{
			if(j>=n-(i-1)&&j<=n+(i-1))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
}