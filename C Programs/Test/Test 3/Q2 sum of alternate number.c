#include<stdio.h>
void main()
{
	int s,e,sum=0;
	printf("Enter starting and ending range : ");
	scanf("%d %d",&s,&e);
	for(int i=s;i<=e;i++)
	{
		if(i%2!=0)
		{
			sum=sum+i;
		}
	}
	printf("Sum is %d",sum);
}