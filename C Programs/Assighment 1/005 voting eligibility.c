#include<stdio.h>
void main()
{
	int age;
	printf("Enter your age :");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are Eligible for voting");
	}
	else
	{
		printf("You are not Eligible for voting");	
	}
}