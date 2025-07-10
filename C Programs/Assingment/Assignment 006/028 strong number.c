#include<stdio.h>
void strong();
void main()
{
	strong();
}
void strong()
{
	int range,temp,reminder,result,final_result;
	printf("Enter any range from 1 to ");
	scanf("%d",&range);
	for(int i=1;i<=range;i++)
	{
		temp=i;
		final_result=0;
		while(temp!=0)
		{	
			result=1;
			reminder=temp%10;
			for(int j=1;j<=reminder;j++)
			{
				result=j*result;
			}
			final_result=result+final_result;
			temp=temp/10;
		}
		if(final_result==i)
		{
			printf("%d ",i);
		}
	}	
}