#include<stdio.h>
void main()
{
	int s,e;
	printf("Enter starting and ending number : ");
	scanf("%d %d",&s,&e);
	printf("Even no. ");
	for(int i=s;i<=e;i++)
	{	
		if(i%2==0)
		{
			printf("%d ",i);
		}
	}
	printf("\nOdd no. ");
	for(int j=s;j<=e;j++)
	{	
		if(j%2!=0)
		{
			printf("%d ",j);
		}
	}
}