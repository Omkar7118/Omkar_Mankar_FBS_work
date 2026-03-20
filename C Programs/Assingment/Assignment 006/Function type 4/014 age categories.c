#include<stdio.h>
int getage();
void main()
{	
	int age,res;
	printf("Enter your age : ");
	scanf("%d",&age);
	res=getage(age);
	if(res==1)
	printf("You are a child");
	else if(res==2)
	printf("You are a teenager");
	else if(res==3)
	printf("You are a adult");
	else 
	printf("You are a senior");
	
}
int getage(age)
{

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