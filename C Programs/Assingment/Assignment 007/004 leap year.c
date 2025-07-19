#include<stdio.h>
void leap_year();
void main()
{	
	int year;
	printf("Enter an year : ");
	scanf("%d",&year);
	leap_year(&year);
}
void leap_year(int* year)
{

	if(*year%4==0&&*year%100!=0||*year%400==0)
	{
		printf("%d is Leap Year",*year);
	}
	else
	{
		printf("%d is not Leap Year",*year);
	}	
}