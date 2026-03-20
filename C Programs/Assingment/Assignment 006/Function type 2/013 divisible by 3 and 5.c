#include<stdio.h>
int divisible();
void main()
{	
	int x;
	x=divisible();
	if(x==1)
		printf("divisible by 3 and 5");
	else if(x==2)
		printf("divisible by 3 but not by 5");
	else if(x==3)
		printf("divisible by 5 but not by 3");
	else
		printf("not divisible by 3 or 5");
		
}
int divisible()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	if(n%3==0&&n%5==0)
	{
		return 1;
	}
	else if(n%3==0)
	{
		return 2;
	}
	else if(n%5==0)
	{
		return 3;
	}
	else
	{
		return 0;
	}	
}