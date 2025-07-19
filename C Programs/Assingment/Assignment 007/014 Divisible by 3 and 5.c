#include<stdio.h>
void getdivisible();
void main()
{
	int n;
	printf("Enter any number : ");
	scanf("%d",&n);
	getdivisible(&n);
}
void getdivisible(int* n)
{

	if(*n%3==0&&*n%5==0)
	{
		printf("%d is divisible by 3 and 5",*n);
	}
	else if(*n%3==0)
	{
		printf("%d is divisible by 3 but not by 5",*n);
	}
	else if(*n%5==0)
	{
		printf("%d is divisible by 5 but not by 3",*n);
	}
	else
	{
		printf("%d is not divisible by 3 or 5",*n);
	}	
}