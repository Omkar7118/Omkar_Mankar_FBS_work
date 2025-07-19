#include<stdio.h>
void armstrong();
void main()
{
	armstrong();
}
void armstrong()
{
	int range,digit=0,temp,temp2,result=1,final_result=0,reminder;
	printf("Enter any range 1 to ");
	scanf("%d",&range);
	for(int i=1;i<=range;i++)
	{
		temp=i;
		temp2=i;
		digit=0;
		while(temp!=0)
		{
			temp=temp/10;
			digit++;
		}	
			while(temp2!=0)
			{
				reminder=temp2%10;
				for(int j=1;j<=digit;j++)
				{
					result=result*reminder;
				}
				final_result=result+final_result;
				temp2=temp2/10;
				result=1;
			}
			if(final_result==i)
			{
				printf("%d ",final_result);
		 }
			final_result=0;
	}	
}