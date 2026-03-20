#include<stdio.h>
int voting();
void main()
{	
	int age,x;
	printf("Enter your age : ");
	scanf("%d",&age);
	x=voting(age);
	if(x==1)
		printf("You are Eligible for voting");
	else
		printf("You are not Eligible for voting");
}
int voting(int age)
{

	if(age>=18)
	{
		return 1;
	}
	else
	{
		return 0;	
	}	
}