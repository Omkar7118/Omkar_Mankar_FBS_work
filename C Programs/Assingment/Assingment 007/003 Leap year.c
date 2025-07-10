#include<stdio.h>
int leap_year();
void main()
{
	if(leap_year())
		printf("Leap Year");
	else
		printf("Not Leap Year");
}
int leap_year()
{
	int year;
	printf("Enter an year : ");
	scanf("%d",&year);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}	
}