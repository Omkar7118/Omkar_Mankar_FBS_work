#include<stdio.h>
void main()
{	
	int n,num=1;
	printf("Enter an row : ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{				
		for(int j=1;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}
}