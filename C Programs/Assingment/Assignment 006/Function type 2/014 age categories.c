#include<stdio.h>
int age();
void main()
{
	int x;
	x=age();
	if(x==1)
		printf("You are a child");
	else if(x==2)
		printf("You are a teenager");
	else if(x==3)
		printf("You are a adult");
	else
		printf("You are a senior");	
}
int age()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	if(age<12)
	{
		return 1;
	}
	else if(age>=12&&age<=19)
	{
		return 2;
	}
	else if(age>=20&&age<=59)
	{
		return 3;
	}
	else
	{
		return 0;
	}	
}