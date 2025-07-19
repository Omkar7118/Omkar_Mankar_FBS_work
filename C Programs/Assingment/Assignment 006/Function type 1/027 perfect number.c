#include<stdio.h>
void perfect();
void main()
{
	perfect();
}
void perfect()
{
	int range,result=0;
	printf("Enter a range from 1 to ");
	scanf("%d",&range);
	for(int i=1;i<=range;i++)
	{
		for(int j=1;j<i;j++)
		{
			if(i%j==0)
			{
				result=result+j;
			}
		}
		if(result==i)
		{
			printf("%d ",i);
		}
		result=0;
	}	
}