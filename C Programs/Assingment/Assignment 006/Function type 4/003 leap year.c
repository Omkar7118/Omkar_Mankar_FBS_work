#include<stdio.h>
int leap_year();
void main()
{	
	int year,x;
	printf("Enter an year : ");
	scanf("%d",&year);
	x=leap_year(year);
	if(x==1)
		printf("%d is Leap Year",year);
	else
		printf("%d is not Leap Year",year);
}
int leap_year(int year)
{

	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}