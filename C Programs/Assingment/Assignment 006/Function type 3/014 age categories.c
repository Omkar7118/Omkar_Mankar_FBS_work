#include<stdio.h>
void getage();
void main()
{	
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	getage(age);
}
void getage(age)
{

	if(age<12)
	{
		printf("You are a child");
	}
	else if(age>=12&&age<=19)
	{
		printf("You are a teenager");
	}
	else if(age>=20&&age<=59)
	{
		printf("You are a adult");
	}
	else
	{
		printf("You are a senior");
	}	
}