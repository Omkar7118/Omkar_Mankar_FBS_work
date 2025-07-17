#include<stdio.h>
findFactor(int,int);
void main()
{
	int s,e;
	printf("Enter starting and ending number : ");
	scanf("%d %d",&s,&e);
	findFactor(s,e);
}
findFactor(int s,int e)
{
	for(int i=s;i<=e;i++)
	{
		printf("%d = ",i);
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}