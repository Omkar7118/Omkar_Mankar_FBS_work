#include<stdio.h>
int voting();
void main()
{
	if(voting())
		printf("You are Eligible for voting");
	else
		printf("You are not Eligible for voting");
}
int voting()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;	
	}	
}