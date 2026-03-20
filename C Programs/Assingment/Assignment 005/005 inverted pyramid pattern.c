#include<stdio.h>
void main()
{	
	int n;
	printf("Enter rows of pyramid : ");
	scanf("%d",&n);	
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n*2-1;j++)
		{
			if(j>=n-(i-1)&&j<=n+(i-1))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}