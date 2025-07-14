#include<stdio.h>
void prime();
void main()
{
	int range;
	printf("Enter any from 1 to ");
	scanf("%d",&range);
	prime(&range);	
}
void prime(int* range)
{
	int flag;

	for(int i=2;i<=*range;i++)
	{
		flag=0;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			}
			if(flag==0)
			{
				printf("%d ",i);
		}
	}
}	
