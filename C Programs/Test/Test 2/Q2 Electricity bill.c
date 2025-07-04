#include<stdio.h>
void main()
{
	int cost,units,total;
	printf("Enter your units : ");
	scanf("%d",&units);
	if(units<=50)
	{
		cost=30;
	}
	else if(units<=150)
	{
		cost=40;
	}
	else if(units>150)
	{
		cost=50;
	}
	total=units*cost;
	printf("Your amount is %d",total);
}