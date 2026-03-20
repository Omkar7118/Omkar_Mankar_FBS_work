#include<stdio.h>
void leap_year();
void main()
{	
	int n;
	printf("Enter number of years : ");
	scanf("%d",&n);
	int year[n];
	printf("Enter %d years : ",n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&year[i]);
	}
	leap_year(year,n);
}
void leap_year(int* year,int size)
{	
	printf("Leap years are ");
	for(int i=0;i<size;i++)
	{	
		if(year[i]%4==0&&year[i]%100!=0||year[i]%400==0)
		{
			printf("%d ",year[i]);
		}
	
	}
}